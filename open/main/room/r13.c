// Room: /open/main/room/r13.c

inherit ROOM;

void create()
{
	set("short", "道路");
	set("long", "	道路在这里开始转而向东，北方的森林并不浓密，
	看起来像是有人时常通行的样子。

");

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"f13",
  "south" : __DIR__"r20",
  "east" : __DIR__"r14",
]) );

  set("outdoors", "/open/main" );


  setup();
}
