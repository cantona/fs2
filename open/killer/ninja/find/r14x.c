// open/killer/ninja/find/rx14.c
// 当玩家发生抉择错误，就会受到严重精神伤害，退回最初点
#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "心灵探索");
  set ("long", @LONG
  
  既然连老祖都对付不了的人，你留下来也仅仅是炮灰而已，所以当然快走
  但是走了没几步后，觉得有戏不看多可惜呀.........
  目送柴荣离去后，你躲在不远的树上看戏......
  然而没多久，那股强大的气息的主人，已经来到附近，
  在人影还没到之前，一股强大的剑气已经袭击而来！！！
  虽然你离老祖有很远的一段距离，但是依旧被强大的剑气波及到！！
  
  在你眼前一黑之前，隐隐约约听到老祖说
  ‘太小看我了吧，居然才用仙剑后九式的第五式对我......’
  
  仙剑后九式？？？仙剑不是才有后三式而已吗？？？  
  
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

