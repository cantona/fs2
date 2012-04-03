// Room: /open/soulin/room/s02.c

inherit ROOM;

void create()
{
	set("short", "少林寺前广场");
	set("long", @LONG
	寺前一片广大的空地，为平常时寺内弟子们练功
	切磋武艺的地方。

LONG
	);
	set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"s01",
  "north" : __DIR__"s05",
  "out" : __DIR__"D01",
  "east" : __DIR__"s03",
]));
	set("outdoors", "/open/soulin");

	setup();
}
