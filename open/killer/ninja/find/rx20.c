// open/killer/ninja/find/rx20.c
// 当玩家发生抉择错误，就会受到严重精神伤害，退回最初点
#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "心灵探索");
  set ("long", @LONG
  
  魔气杀在那个人身边造成了强大的气旋，似乎导致那人行动为之一滞
  然而其他的仙剑门徒，几乎都离开他身边有一丈之远，
  你觉得这是绝佳的机会，脚采幻星步，抽离开队伍往那人奔去。
  手中的暗器早已灌足强大的魔气，并且再同一时间发射而出!
  然而那人身旁竟然有一股强大的防御气墙，将你的暗器全数反弹!
  逼不得已，赶紧利用手中的匕首将暗器一一击落，
  正当你松了一口气之时，一道强大的剑气穿身而过，你眼前一黑!
  
   
LONG);
  set("no_transmit",2);
  setup();
}

void init()
{
    object ob=this_player();
    if( interactive(ob))
	    remove_call_out("greeting");
  call_out("greeting",3 , ob);   
}

void greeting(object ob)
{
   if( ob->query_temp("firstpart")== 8)    
   {
     ob->set_temp("firstpart",7);
     ob->set("sen",1);
     ob->set("gin",1);
     tell_object(ob," 你感到精神逐渐涣散....逐渐陷入昏迷状态..... \n");
     ob->move("/open/killer/room/pillrm.c");
    }
    // 基本上是很不合理啦，就当成巫师测试用，一到最初点
    else 
     ob->move(__DIR__"r1.c");
}

