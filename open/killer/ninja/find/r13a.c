// open/killer/ninja/find/r13a.c
#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "心灵探索");
  set ("long", @LONG
  
    你看准对手的漏洞，利用幻星步法边战边走切近两人，
    当你一起加入战局之后，两人的压力顿时减轻......
    叶秀杀趁机连续发出霸与遮魂之霸雨式，漫天的星点将对手逼退
    柴荣因为缺乏真.黑牙神功的推动，所以逼近对手将魔气逼入对手体内
    柴荣见到叶秀杀靠内力驱动霸雨式，内心突然有所领悟......
    ‘小杀，帮我逼退对手!’两人心意相连不需多加解释，
    叶秀杀立刻将手边的暗器配合霸雨式一起射出去，将身边的敌人逼退
    柴荣趁此空隙，将魔气灌注暗器之上，使用霸雨式的手法将暗器射出
    这时，你在熟悉不过‘魔气杀’由柴荣发出!!.......
    魔气杀由柴荣全力发出果然不同凡响，身边的敌人一一倒下.......
    剩下的敌人也畏惧这样的威力而纷纷溜走...原来这就是魔气杀的由来？
    全力施展的柴荣，这时候也无力的倒下来了....
    叶秀杀赶紧扶住柴荣，并且朝你走了过来...........
    虽然你想走近叶秀杀，但是精神体似乎被招唤，而逐渐抽离开这个世界。
    
    
LONG);

  set("no_transmit",2);
  setup();
}

//基本上，这是a部分，有关 杀手的一些基本设定的介绍
//但是b部分是有关分功化影的部分，所以只好要玩家在解一次
void init()
{
    object ob=this_player();
    if( interactive(ob))
	    remove_call_out("greeting");
  
  if (ob->query("ninja/apart") != 1)
  	ob->set("ninja/apart",1);
  //代表玩家还不知道，b部分的线索，所以要玩家再解
  if (ob->query("ninja/bpart") != 1)
  	call_out("greeting",5 , ob);   
  else
  {
  	call_out("finished",5 , ob);
  }  	
}

void greeting(object ob)
{
   if( ob->query_temp("firstpart")== 8)    
   { 
     tell_object(ob,"虽然这些招式的由来已经清楚\n");
     tell_object(ob,"但是你似乎有漏掉一些线索，再探索另一部分吧\n");
     ob->move(__DIR__"r1.c");
   }
    else 
     ob->move(__DIR__"r1.c");
}

void finished(object ob)
{
   if( ob->query_temp("firstpart")== 8)    
   {
     ob->set_temp("firstpart",9);
     tell_object(ob,"所有的历史与线索已经探查完成。 \n");
     tell_object(ob,"看来要先去把绿毛金铃找出来了。\n");
     ob->move("/open/killer/room/pillrm.c");
   }
   else 
     ob->move(__DIR__"r1.c");
}

