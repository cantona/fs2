inherit ROOM;

void create()
{  
   
   set("short","海洋");
   set ("long", @LONG□

	你凭藉着定水珠的神奇力量，自由自在的在海中行走
	然而为了避免迷路与避开危险地带，所以你最好跟着航线走。
	茫茫大海，令你感到造物者的神奇，或许以人类的力量早晚也能到天空吧？
	然而，眼前的课题是--------我要上岸！！！
	

LONG);
  set("light_up", 1);
  set("exits", ([ /* sizeof() == 1 */
        "south" : __DIR__"fonrm6.c",  	
       "east" : __DIR__"fonrm4.c",  
      "northwest" : __DIR__"landrm4.c",
]));
set("objects", ([ /* sizeof() == 1 */
      "/open/killer/sea/npc/big_fish.c":1,
      "/open/killer/sea/npc/tuna_fish.c":2,
      "/open/killer/sea/npc/angler_fish.c":2,
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