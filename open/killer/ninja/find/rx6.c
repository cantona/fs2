// open/killer/ninja/find/rx6.c
// 当玩家发生抉择错误，就会受到严重精神伤害，退回最初点
#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "心灵探索");
  set ("long", @LONG
	你根本不敢回头看背后的人，仅小声得回答了：‘我在看戏.....’
	‘看戏？哈哈....看戏当然要到前面才好看呀!!!’
	
	话语一落，你感到一阵强大的劲力，将你推到两人之间!!
	
	并且听到‘有人要看戏哦....你们好好表演呀!!!!’
	
	你根本不敢去看两人的表情，其实也没什么机会看啦......
	
	因为你已经眼前一黑................................

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

