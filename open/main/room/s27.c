// Room: /open/main/room/s27.c

inherit ROOM;

void create()
{
	set("short","道路");
	set("long",
"道路两旁是一望无际的大草原 , 北边是一片原始森林 ,
你看到南方有座新兴的城市 , 大概就是近年来拜通航所赐而
快速发展的枫林港吧 !

");

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"s31",
  "north" : __DIR__"f22",
  "west" : __DIR__"s26",
  "east" : __DIR__"s28",
]) );

  set("outdoors", "/open/main" );

  setup();
}
