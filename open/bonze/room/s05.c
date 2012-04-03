// Room: /open/soulin/room/s05.c

inherit ROOM;

void create()
{
	set("short", "少林寺前广场");
	set("long", @LONG
	这里是少林弟子们练功的场所，四周摆满了练功的器具。
	北边有个穿堂可进入寺中。

LONG
	);
	set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"s04",
  "north" : __DIR__"s07",
  "south" : __DIR__"s02",
  "east" : __DIR__"s06",
]));
	set("outdoors", "/open/soulin");

	setup();
}
