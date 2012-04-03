// open/killer/ninja/find/rx24.c
// 当玩家发生抉择错误，就会受到严重精神伤害，退回最初点
#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "心灵探索");
  set ("long", @LONG
  
  森林里面似乎是最适合躲藏的地方，所以你快速的朝森林冲去
  果然你的判断是非常正确的，森林果然是非常适合躲人的
  一群仙剑派的高手正好躲藏在树林之中埋伏，你宛如肥羊一般送上门
  老祖将你往后送，自己冲上前去对付那些高手，
  正当你稳住身形，打算翻身往其他方向逃去的时候
  你的背后传来那个人的声音‘何方小辈，居然敢干涉我仙剑的事情？’
  你也看到你的胸前已经被银光贯穿............
   
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

