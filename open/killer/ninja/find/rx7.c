// open/killer/ninja/find/rx6.c
// 我想玩家应该会选重这一项，所以顺便送点谜题的引子
// 当玩家发生抉择错误，就会受到严重精神伤害，退回最初点
#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "心灵探索");
  set ("long", @LONG
  从一开始，你就没有去干涉到这个时空里面的一切，现在居然被人家发现了？
  你决定，立刻反击，避免事情的恶化下去!!! 反身立刻推出一掌!!
  
  然而你立刻发现你的决定有多么的愚蠢!! 因为对方居然施展出‘幻星步’？!
  而且身法远超过你想像中的快!且带有特殊的幻影存在!!!
  并且一股，暨熟悉又陌生的气劲向自己席卷而来，并且听到‘魔气杀’!!
  气劲里面居然带有一股冻气？这是魔气杀吗？？？!
  
  你并没有机会想太多，因为你的眼前已经看不到东西了..............

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

