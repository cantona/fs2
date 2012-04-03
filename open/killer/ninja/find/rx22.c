// open/killer/ninja/find/rx21.c
// 当玩家发生抉择错误，就会受到严重精神伤害，退回最初点
#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "心灵探索");
  set ("long", @LONG
  
  你觉得你还是小心一点，不要插手以免干扰到存在的历史
  所以你决定继续观战，但是没想到老祖忽然发出一记
  威力强大的难以想像的魔气杀，配合霸雨式手法，
  也就是更上一层楼的‘霸雨.魔气杀’，贯足在暗器之上
  但是目标并非那个人，反而朝着自己所在的这一群仙剑门徒而来!
  逼得那个人放弃攻击老祖，反身设法击落这一些暗器!
  但是多如繁星，且贯足魔气的暗器，怎么可能全部拦的下来
  许多仙剑弟子分分中招，很不幸的你也是其中一个........
  
   
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

