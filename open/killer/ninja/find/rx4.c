// open/killer/ninja/find/rx4.c
// 当玩家发生抉择错误，就会受到严重精神伤害，退回最初点
#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "心灵探索");
  set ("long", @LONG
     为了避免暗器的破空声导致，你的所在被发现，且自己用身体去挡好像有点笨
     所以你运起杀手的超上级招式‘魔气杀’，想要将此黑影挡下来......
     然而当你气走全身的时候，整个精神体似乎失去控制？!!!
     看来这对柴荣的心灵冲击太大？!!   你的精神体开始溃散.......

LONG);
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

