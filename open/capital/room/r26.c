// Room: /open/capital/room/r26.c

inherit ROOM;

void create()
{
	set("short","日落驰道");
	set("long",@LONG
城西的车马大道。路边的两排大榕树枝叶茂密，看起来似乎年代久
远，据附近的长者说，这些树至少有百年历史了，历经了好几代的皇帝
，看过无数世间冷暖。

LONG);


  set("outdoors", "/open/capital" );

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"r27",
  "north" : __DIR__"r25",
]) );

  set("gopath", "north" );

  setup();
}
