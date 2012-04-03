inherit ROOM;

void create ()
{
  set ("short", "外海");
  set ("long", @LONG
□

	你凭藉着定水珠的神奇力量，自由自在的在海中行走
	然而为了避免迷路与避开危险地带，所以你最好跟着航线走。
	虽然定水珠可以帮助你在水中移动，但是并不代表没有人会攻击你！
	而且这里似乎水温有越来越低的趋势，看来定水珠并没有保温的效果。
	目前海岸离你并不是很远，但是海中的生物已经很多了。。。

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"landrm3",
  "west" : __DIR__"landrm1.c",
]));
  set("objects", ([ /* sizeof() == 2 */
  "/open/killer/sea/npc/auklet.c" : 2,
  "/open/killer/sea/npc/auk.c" : 1,
]));
  set("light_up", 1);

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
