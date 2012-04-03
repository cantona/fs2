// Room: /open/main/room/s17.c

inherit ROOM;

void create()
{
	set("short", "草原");
	set("long", "	在往北就是京城的镇南门，这片草原十分的辽阔，
	南方有个御林军的操练场。

");

  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"s16",
  "south" : __DIR__"s21",
   "north" : "/open/capital/room/D03",
  "east" : __DIR__"s18",
]) );

  set("outdoors", "/open/main" );

  setup();
}
