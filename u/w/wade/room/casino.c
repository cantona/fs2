#include <ansi.h>
#include <login.h>

#define ROOM_ID __FILE__
inherit ROOM ;
inherit CHINESE_D;
inherit CHANNEL_D;

void init_data ();
string lucky_seven(object me);

int     rest;                   // 开始一局 rest=0, 局跟局中间休息 rest=1
int	bet;			// 开始下注

void create () {


// ::create();
  seteuid(getuid()) ;
  set ("short", "天天来赌场") ;
  set ("long","\n

      ㊣赌㊣     天天来赌场    ㊣赌㊣

\n"
) ;
        set ("light",1) ;
        set ("exits", ([
        "out" : START_ROOM,
        ]));
   set("item_desc", ([
       "note": "这是这个赌场的规则，怎么不读读看呢？\n",
       ]) );

        rest = 1;
        call_out ("begin_game", 5) ;
}

void init()
{
  add_action ("do_start", "start");
}

do_start ()
{
  if (rest)
    call_out ("begin_game", 5);
  else
    write ("人家正在赌, 你想被围殴啊?!\n");
  return 1;
}


void begin_game ()
{
  int i;

  rest = 0;	// 开始一盘赌局

  init_data (); // 清掉所有人的赌博记录

  // 摸骰子
  call_out ("step1", 2+random(3));
}

void step1()
{
  do_channel(0, "gamble",
	HIB+"庄家把一颗骰子拿出来给大家看，并且喊道: "
	"这是一颗公正骰子，请玩家鉴定一下!\n");
  call_out ("step2", 2+random(3));
}

void step2()
{
  do_channel(0, "gamble",
	HIB+"庄家看了看，把骰子丢进摇芦里，并拿起摇芦摇啊摇.....\n"NOR);
  call_out ("step3", 2+random(3));
}

void step3()
{
  do_channel(0, "gamble",
	HIY+"庄家边摇边喊: 来来来，看看看，早来赢一半，慢来抱鸭蛋!\n"NOR);
  call_out ("step4", 2+random(3));
}

// 停手，等开盅
void step4()
{
  do_channel(0, "gamble",
	HIG+"庄家终于把摇芦放下来，向所有人大叫: "
	"有钱下注，没钱回家抱老婆!\n"NOR);
  bet = 1;
  // 开盅
  call_out ("step5", 20+random(5));
}

void step5()
{
  do_channel(0, "gamble",
	HIB+"庄家嘶声力竭的喊道: 停止下注, 要开牌了....。\n"NOR);
  bet = 0;
  call_out ("step6", 2+random(2));
}

void step6()
{
  object	*ob;
  int		i, num, money, all_lose;
  string	msg;

  num = random (13)+1;

  // 赌博禁止用 tintin, 但不明文规定, 用 {[(xx)]} 可以防止一部份
  do_channel(0, "gamble",
	HIB+ "庄家嘶声力竭的喊道: 1, 2, 3...开!\n"NOR);
  if (num != 7)
    do_channel(0, "gamble",
	HIB+"庄家哑着嗓门的喊道:  {[("+chinese_number(num)+")]}\n"NOR);
  else
    do_channel(0, "gamble",
	HIB+"庄家哑着嗓门的喊道:  哇! Ｌｕｃｋｙ　Ｓｅｖｅｎ\n"NOR);

  ob = users();
  all_lose = 1;
  if (num != 7)
    for (i=0; i<sizeof(ob); i++) {
      if (ob[i]->query_temp("gamble/num") == num) {
        all_lose = 0;
        money = 13 * ob[i]->query_temp("gamble/bet");
        tell_object (ob[i],
          HIB+"庄家赔你"+cvalue(money)+"。\n"+NOR);

        // 理赔
        ob[i]->pay_player(money);
      }
      else
        tell_object (ob[i],
          HIB+"庄家笑笑对你说: Sorry lah....下次再来比过。\n"NOR);
    }
  else {
    msg = "";
    for (i=0; i<sizeof(ob); i++)
      if (ob[i]->query_temp("gamble/num") == 7)
	msg += lucky_seven(ob[i]);
    do_channel(0, "gamble", HIY+msg+NOR);
  }
    
  if (all_lose)
    do_channel(0, "gamble",
	HIR+"  ＊＊＊　通　杀  ＊＊＊　\n"+NOR);
  rest = 1;
 
  call_out ("begin_game", 5+random(5));
}

// 启始资料设定, 清掉所有人的赌博记录
void init_data()
{
  object        me, *ob;
  int           i, j;

  ob = users();
  for (i=0; i<sizeof(ob); i++)
    ob->delete_temp("gemble");
}

int read_note(string str)
{
  if (str!="note" ) return notify_fail ("你想要读什么？\n") ;

  write (
        "这个游戏很简单, 就是在你前面有 12 个号码（１～１２）, 你\n"+
        "可以选你自己喜欢的号码来压, 在你压之前, 庄家会从杯子里拿\n"+
        "出骰子, 这个骰子到底是那一个号码, 世上没人知道, 如果你刚\n"+
        "好压中庄家所拿出的号码的话会赔你压在该子本金的12倍的钱。\n"+
        "    赌法很简单, 以你想压车一百两来说:\n\n"+
        "bet 10 100\n\n"+
        "PS: 如果庄家休工了, 你可以用 start 请他开盘\n"+
        "--------------------------------------------------------------\n");
  return 1;
}

int query_bet()
{
  return bet;
}

int player_bet(object me, int num, int value)
{
  if (bet == 0) return notify_fail("赌局还没开始哩。\n");
  if (num != 7) {
    if (num >= 1 && num <= 13)
      if (me->can_afford(value)) {
	me->pay_money(value);
	me->set_temp("gamble/bet", value);
	me->set_temp("gamble/num", num);
	tell_object(me, "你付"+cvalue(value)+"给赌场。\n");
      }
      else
	tell_object(me, "你掏了掏口袋, 惨了, 钱不够。\n");
    else
	tell_object(me, "请压一到十三之间的数字。\n");
  }
  else {
    if (me->query("learned_points") >= value) {
	me->add("learned_points", -value);
	me->set_temp("gamble/num",7);
	me->set_temp("gamble/bet",value);
	tell_object(me, "你用"+chinese_number(value)+"点潜能当赌注。\n");
    }
    else
	tell_object(me, "去跟师父多学学再来赌博吧。\n");
  }
  return 1;
}

string lucky_seven(object me)
{
  int		point, earn;

  point = me->query("learned_points");
  earn = 13 * me->query_temp("gamble/bet");
  me->set("learned_points",point+earn);
  
  return "庄家大声叫道: 恭喜!!!"+me->short()+"\n";
}
