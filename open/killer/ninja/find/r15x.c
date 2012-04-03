// open/killer/ninja/find/rx15.c
//‘’
// 当玩家发生抉择错误，就会受到严重精神伤害，退回最初点
#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "心灵探索");
  set ("long", @LONG
  
  在众人围攻之下，只好各自保命，各出奇招看看是否可以杀出一条血路
  但是没多久，你已经离两人越来越远，曾几何时就连金刀武士也找上你了？
  想不到魔教徒跟金刀武士的联手，居然可以发挥强大的攻防能力，
  让你就算使出全力也逐渐落居下风，看着自己的鲜血逐渐往外流
  让你很难相信，这样的痛楚，应该只是幻觉.....你的眼前一黑.........
  
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

