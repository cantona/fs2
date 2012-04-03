inherit ROOM;

void create()
{  
   
   set("short","近海");
   set ("long", @LONG□

	你凭藉着定水珠的神奇力量，自由自在的在海中行走
	然而为了避免迷路与避开危险地带，所以你最好跟着航线走。
	虽然定水珠可以帮助你在水中移动，但是并不代表没有人会攻击你！
	目前海岸离你并不是很远，但是海中的生物已经很多了。。。
	看来他们自由自在的游着，想到自己在武林中沈浮便感到一阵落寞感。。。

LONG);
  set("light_up", 1);
  set("exits", ([ /* sizeof() == 1 */
        "north" : __DIR__"fonrm1.c",  	
       "east" : __DIR__"fonrm3",  	
]));
set("objects", ([ /* sizeof() == 1 */
      "/open/killer/sea/npc/stone_fish.c":1,
      "/open/killer/sea/npc/angler_fish.c":1,
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
 return 1;
}