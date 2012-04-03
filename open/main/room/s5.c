// Room: /open/main/room/s5.c

inherit ROOM;

void create()
{
	set("short", "草原");
	set("long", "这里是一望无际的大草原，地上有不少野兽的足迹
");

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"s7",
  "west" : __DIR__"s4",
  "north" : __DIR__"s2",
  "east" : __DIR__"s6",
]) );

  set("outdoors", "/open/main" );

  setup();
}
