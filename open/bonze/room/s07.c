// Room: /open/soulin/room/s07.c

inherit ROOM;

void create()
{
	set("short", "穿堂");
	set("long", @LONG
	一条长长的走廊，直直通往最著名的大雄宝殿。


LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"big",
  "south" : __DIR__"s05",
]));
	set("light_up", "1");

	setup();
}
