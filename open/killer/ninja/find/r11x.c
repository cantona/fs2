// open/killer/ninja/find/rx10.c
// 当玩家发生抉择错误，就会受到严重精神伤害，退回最初点
#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "心灵探索");
  set ("long", @LONG
  
  你朝着那群魔教徒走去,想说干脆还是投降会比较好一点，毕竟他们应该可以活很久
  但是你却忽略了，你却不一定能活那么久。因为，正当你想要说话的时候，
  对方的手中，却对你洒出毒粉，让你失去先机！！
  然后，所有人同时出手，在你还来不及反应的时候，已经眼前一黑
  
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

