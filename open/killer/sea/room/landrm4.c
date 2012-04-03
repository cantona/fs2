inherit ROOM;

void create()
{  
   
   set("short","外海");
   set ("long", @LONG□

	你凭藉着定水珠的神奇力量，自由自在的在海中行走
	然而为了避免迷路与避开危险地带，所以你最好跟着航线走。
	海中的生物在你身旁自由的来去，他们似乎没有敌意。
	奇怪，这些鱼为何不怕冷呀？你都快冷的受不了说。。。
	
LONG);
  set("light_up", 1);
    set("exits", ([ /* sizeof() == 1 */
        "south" : __DIR__"landrm3.c",  	
       "north" : __DIR__"landrm5", 
      "southeast" : __DIR__"fonrm5",  	
]));

set("objects", ([ /* sizeof() == 1 */
      "/open/killer/sea/npc/auklet.c":3,
      "/open/killer/sea/npc/porgy_fish.c":1,
]));

 setup();
}

int valid_leave(object me, string dir)
{
  int max;
 object ob2;

 if ( !present("static_water",this_player()) )  //检查玩家是否有定水珠
 {//如果没有定水珠，代表无法在水中移动
	   message_vision("$N居然没了定水珠，完蛋了！！.........\n",me);
	   message_vision("$N在海中漂流........\n", me);
	   me->add("kee",-20);
	   return 0;
}  
 //如果有定水珠就代表可以通过
me->add("kee",-2);
 return 1;
}
