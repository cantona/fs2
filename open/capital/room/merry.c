// Room: /open/capital/room/merry
#include "/open/common/common.h"
#include <ansi.h>
#include <room.h>
#include <command.h>

inherit ROOM;

int in_merry;
object husband, wife;
string event;

object	po, horse, bedan, music, firework, misc,
	relative, friend, people;

void create ()
{
  set ("short", "民政司");
  set ("long", @LONG
这是皇上特地为百姓开辟的一官位，专门负责处理结婚事谊如果您
想结婚，请在这儿登记(log),当然，记得把另一半也带过来，另外准备
黄金十两。一切结婚事项会有专人办妥，并且附赠新房一间。对了, 皇
上体查民间疾苦, 近来怨偶甚多, 所以特地开办离婚手续, 请要离婚的
(divorce) 请赶快, 否则没机会了. 想到这, 不禁想起....
	         自古多怨偶, 从今少烦忧.
对了, 皇上还说, 要强迫离婚也可以, 带一千两黄金来吧.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"r72",
]));
  set("item_desc", ([ /* sizeof() == 1 */
  "board" : "
           永浴爱河

           早生贵子

",
]));
  set("no_fight", 1);
  set("light_up", 1);
  set("no_magic", 1);

  setup();
}

void init()
{
  add_action ("divorce", "divorce");
  add_action ("log", "log");
  add_action ("logout", "logout");
  add_action ("answer", "answer");
}

int divorce (string arg)
{
  string couple;
  object me, obj;

  me = this_player();
  if (couple = me->query("couples/id")) {
    if (!obj = present (couple, this_object())) {
      if (me->can_afford (10000000)) {
	obj = FINGER_D->acquire_login_ob (couple);
	if (obj) {
	  obj->delete ("couples");
	  obj->save();
	  destruct (obj);
	  me->pay_money (10000000);
	  me->delete ("couples");
	  write ("既然你身怀钜款, 想离婚就让你离婚吧.!\n");
	}
	else {
	  me->delete ("couples");
	  write ("噫? 你另一半不见了, 好吧, 就让你如愿.\n");
	}
      }
      else {
        write ("要离婚的话, 要找另一半过来.\n");
      }
    }
    else if (!obj->query_temp ("divorce")) {
      me->set_temp ("divorce", 1);
      write ("等你另一半也来注册离婚, 这样手续就完成了.\n");
    }
    else if (obj->query ("couples/id") == me->query ("id")) {
      obj->set_temp ("divorce", 0);
      me->delete ("couples");
      obj->delete ("couples");
      message_vision("民政司长说: 恭喜, 你们两人从今以后就自由了.\n", this_player());
    }
    me->save();
  }
  else {
    write ("没结婚就想离婚?\n");
  }
  return 1;
}

void logout()
{
  in_merry = 0;
  event = "";
  remove_call_out("wife");
  remove_call_out("husband");
  remove_call_out("confirm_wife");
  remove_call_out("confirm_husband");
  tell_room(this_object(), "民政司长说道: 本次结婚申请因故取消。\n");
}

int log()
{
  object	me;
  string	name;
  int		age;

  me=this_player();
  if (me->query("couples")) {
    if (!present("wedding ring", me)) {
	write ("民政司长说: 我看看....\n民政司长说: 你只是戒指掉了, 我马上补给你.\n");
	if (new(RING)->move(me))
	  write ("民政司长说: 戒指给你, 可别再搞丢了喔.\n");
	else
	  write ("民政司长说: 对不起, 目前戒指缺货, 找大神看看有没有.\n");
    }
    else
      write ("民政司长说: 噫? 你想再婚? 门儿也没有.\n");
    return 1;
  }
  
  if (in_merry)
    return notify_fail ("民政司长说: 现在已经有人登记要结婚，你等等再来。\n");

  name = me->name();
  age = me->query("age");
  if ( age < 16) {
    event = "";
    message_vision("民政司长说: "+me->name()+"啊，太早结婚会操死喔，长大点再来吧。\n",
	me);
    return 1;
  }
  if ( !me->pay_money(100000) ) {
    event = "";
    message_vision("民政司长说: "+me->name()+"啊，想结婚总要有些本儿吧，先去赚钱再来。\n",
	me);
    return 1;
  }
  message_vision("民政司长说道: "+name+"啊，看在钱的份上，就帮你办结婚事谊吧。\n"+
		 "民政司长说道: "+name+"，开始回答我一些问题，"+
		 "每个问题给你一分钟考虑。\n民政司长翻了翻簿子，想了一下...\n",me);
  
  in_merry = 1;
  if (me->query("gender") == "男性") {
	wife = 0;
	husband = me;
	me->set_temp("in_merry",1);
	call_out("wife", 3);
  }
  else {
	me->set_temp("in_merry",1);
	husband = 0;
	wife = me;
	call_out("husband", 3);
  }
  return 1;
}

void wife ()
{
  message_vision("民政司长说道: "+husband->name()+"，请回答我你的老婆是谁!\n",
	husband);
  event = "ask_wife";
  call_out("logout", 60);
}

void confirm_husband()
{
  message_vision(
    "民政司长说道: "+husband->name()+"，你愿意一生保护"+wife->name()+"?\n"+
    "并且爱他照顾他信任他体贴他吗(y/n) ?\n", husband);
  event = "confirm_husband";
  call_out("logout", 60);
}

void confirm_wife()
{
  message_vision(
    "民政司长说道: "+wife->name()+"，你愿意一生跟随"+husband->name()+"?\n"+
    "并且爱他照顾他信任他体贴他吗(y/n) ?\n", wife);
  event = "confirm_wife";
  call_out("logout", 60);
}
  
int answer(string arg)
{
  object	me=this_player();

  if (me != husband && me != wife) return
    notify_fail ("民政司长说道: 你又不是新郎新娘，你花轰啊。\n");

  if (!arg) return 0;

  if (!in_merry) return notify_fail ("民政司长说道: 想结婚就先登记吧。\n");
  switch (event) {
	case "ask_husband":
	  event = 0;
	  if (me != wife) return
		notify_fail ("民政司长说道: 别急，还没轮到妳。\n");
	  remove_call_out("logout");
	  if (!husband = present(arg, environment(me))) {
		message_vision("民政司长说道: "+me->name()+
		  "你的对象不在啊，先找他来吧，等妳一分钟喔。\n", wife);
		call_out("wife", 60);
	  }
	  else {
	    if ( husband->query("gender")=="女性") {
	      message_vision("民政司长说道: 对不起，请找个有茶嘴的当老公。\n",
		wife);
	    }
	    else {
	      call_out("confirm_wife",3);
	      message_vision("$N回答说: 我要嫁$n为妻!\n", me, husband);
	    }
	  }
	  break;
	case "ask_wife":
	  if (me != husband) return
		notify_fail ("民政司长说道: 别急，还没轮到你。\n");
	  event = 0;
	  remove_call_out("logout");
	  if (!wife = present(arg, environment(me))) {
		message_vision("民政司长说道: "+me->name()+
		    "你的对象不在啊，先找她来吧，等你一分钟喔。\n", me);
		call_out("wife", 60);
	  }
	  else {
	    if ( wife->query("gender")=="男性") {
 	      message_vision("民政司长说道: 对不起，请找个会生小孩的当老婆。\n",me);
	    }
	    else {
	      call_out("confirm_wife",3);
	      message_vision("$N回答说: 我要娶$n为妻!\n", me, wife);
	    }
	  }
	  break;
	case "confirm_husband":
	  if (me != husband) return
		notify_fail ("民政司长说道: 别急，还没轮到你。\n");
	  event = 0;
	  remove_call_out("logout");
	  if (arg == "y" || arg == "yes" || arg == "Y" || arg == "Yes") {
	    message_vision("$N回答说: 是的。\n", me);
	    message_vision("民政司长说道: hmm...接下来就等人送红包吧。\n",me);
//我把 void stop_merry()后面那段在这也加上去,结果竟可行...就酱子

	    husband->set("couples/id", wife->query("id"));
	    husband->set("couples/name", wife->name());
	    wife->set("couples/id", husband->query("id"));
	    wife->set("couples/name", husband->name());
	    husband->save();
	    wife->save();
	    
	    call_out("start_merry",3);
	  }
	  else {
	    message_vision("$N回答说: 喔! Kill me!!!\n", me);
	    message_vision("民政司长说道: 既然男方不答应，本次申请作废。\n", me);
	    call_out("logout",1);
	  }
	  break;
	case "confirm_wife":
	  if (me != wife) return
		notify_fail ("民政司长说道: 别急，还没轮到你。\n");
	  event = 0;
	  remove_call_out("logout");
	  if (arg == "y" || arg == "yes" || arg == "Y" || arg == "Yes") {
	    message_vision("$N回答说: 是的。\n", me);
	    call_out("confirm_husband",3);
	  }
	  else {
	    message_vision("$N回答说: 喔! Kill me!!!\n", me);
	    message_vision("民政司长说道: 既然女方不答应，本次申请作废。\n", me);
	    call_out("logout",1);
	  }
	  break;
	default:
	  return 0;
  }
  return 1;
}

int wear_all()
{
  object	ob;

(ob=new("/data/autoload/ring.c"))->move(husband); ob->wear();
  (ob=new(MBOOTS))->move(husband); ob->wear();
  (ob=new(GLOVES))->move(husband); ob->wear();
  (ob=new(CLOTH))->move(husband); ob->wear();
  (ob=new(PANTS"))->move(husband); ob->wear();
  (ob=new(SCARF))->move(husband); ob->wear();
  new(FLOWER)->move(wife);
(ob=new("/data/autoload/ring.c"))->move(wife); ob->wear();
  (ob=new(GLOVES))->move(wife); ob->wear();
  (ob=new(LACE))->move(wife); ob->wear();
  (ob=new(GBOOTS))->move(wife); ob->wear();
  (ob=new(SKIRT))->move(wife); ob->wear();
  (ob=new(SUIT))->move(wife); ob->wear();
  (ob=new(CAPE))->move(wife); ob->wear();
  return 1;
}

void start_merry()
{
  object	wade;
  string	husband_name, wife_name;

  husband_name=husband->query("name");
  wife_name=wife->query("name");

  call_out("wear_all",1);

  remove_call_out("start_merry");
  CHANNEL_D->do_channel(this_object(), "mud",
	HIY"新郎"+husband_name+"和新娘"+wife_name+"的结婚仪式开始........\n"+
	"各路亲朋好友请来民政司送礼见证..........\n"NOR);

  call_out("step1", 60);
}

void step1()
{
  CHANNEL_D->do_channel(this_object(), "mud",
	HIY"绕京城一周....乐队、炮队、杂耍团等都请就位....\n"
	"新郎请上俊马，新娘请上花轿。\n"NOR);
  tell_room (this_object(), "你看到新郎上了俊马新娘上了花轿。\n", 
	husband, wife);
  tell_object(husband, "你高高兴兴的上了俊马。\n");
  tell_object(wife, "妳高高兴兴的上了花轿。\n");

  po		= new(PO);		po->move(MSTART_ROOM);
  horse		= new(HORSE);		horse->move(MSTART_ROOM);
					horse->start_merry(husband);
  bedan		= new(BEDAN);		bedan->move(MSTART_ROOM);
					bedan->start_merry(wife);
  music		= new(MUSIC);		music->move(MSTART_ROOM);
					music->start_merry();
  firework	= new(FIREWORK);	firework->move(MSTART_ROOM);
					firework->start_merry();
  misc		= new(MISC);		misc->move(MSTART_ROOM);
					misc->start_merry();
  relative	= new(RELATIVE);	relative->move(MSTART_ROOM);
					relative->start_merry(husband, wife);
  friend	= new(FRIEND);		friend->move(MSTART_ROOM);
					friend->start_merry(husband, wife);
  people	= new(PEOPLE);		people->move(MSTART_ROOM);
					husband->move(horse);
  					wife->move(bedan);

  call_out ("forward", 5+random(10), "north", 8);
}


void forward(string go_way, int times)
{
  object	env=environment(horse);
  int		dir;

  if (times == 0)
    if (go_way == "north") {
	times = 8;
	go_way = "south";
    }
    else {
	CHANNEL_D->do_channel(this_object(), "mud",
	  HIY"礼成....新郎新娘送入洞房，其他人作鸟兽散。\n"NOR);
	call_out ("stop_merry", 1);
    }

  tell_room (env, "整队队伍往前进...\n", husband, wife);
  tell_object(husband, "俊马稍微震动了一下，随着队伍往前进....\n");
  tell_object(wife, "轿子稍微震动了一下，随着队伍往前进....\n");

	GO_CMD->main(po, 	go_way);
	GO_CMD->main(horse,	go_way);
	GO_CMD->main(bedan,	go_way);
	GO_CMD->main(music,	go_way);
	GO_CMD->main(firework,	go_way);
	GO_CMD->main(misc,	go_way);
	GO_CMD->main(relative,	go_way);
	GO_CMD->main(friend,	go_way);
	GO_CMD->main(people,	go_way);
	GO_CMD->main(husband,	go_way);
	GO_CMD->main(wife,	go_way);
	call_out("forward",5+random(5), go_way, times-1);
}

void stop_merry()
{
	husband->move("/player/inn");
	wife->move("/player/inn");
	destruct(po);
	destruct(horse);
	destruct(bedan);
	destruct(music);
	destruct(firework);
	destruct(misc);
	destruct(relative);
	destruct(friend);
	destruct(people);
	husband->set("couples/id", wife->query("id"));
	husband->set("couples/name", wife->name());
	wife->set("couples/id", husband->query("id"));
	wife->set("couples/name", husband->name());
	husband->save();
	wife->save();
	// 请吃喜酒
	// .....
}
