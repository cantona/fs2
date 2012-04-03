// open/killer/ninja/find/rx16.c
//‘’
// 当玩家发生抉择错误，就会受到严重精神伤害，退回最初点
#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "心灵探索");
  set ("long", @LONG
  
  看着两人的身影离你越来越远，你决定自己杀出一条血路逃走，
  运起全身的气劲，将所有的魔气灌满暗器之上.......
  运起魔气杀，想不到这时候，居然气劲爆走，使出了魔血气杀
  虽然你眼前的对手轻易的被你打倒，但是你的眼前也一黑..........
  
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

