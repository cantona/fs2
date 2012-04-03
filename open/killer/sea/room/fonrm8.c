inherit ROOM;

void create()
{  
   
   set("short","镜月港外海");
   set ("long", @LONG□

	你凭藉着定水珠的神奇力量，自由自在的在海中行走
	然而为了避免迷路与避开危险地带，所以你最好跟着航线走。
	海岸线在远远的地方，海中的生物也逐渐的变少了。
	
LONG);
  set("light_up", 1);
  set("exits", ([ /* sizeof() == 1 */
        "north" : __DIR__"fonrm9.c",  	
       "westsouth" : __DIR__"fonrm7.c",  	
]));
set("objects", ([ /* sizeof() == 1 */
      "/open/killer/sea/npc/puffer_fish.c":1,
      "/open/killer/sea/npc/hake_fish.c":1,
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