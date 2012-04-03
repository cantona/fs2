// Room: /open/main/room/M11a.c

inherit ROOM;

void create()
{
	set("light_up",1);
	set("short", "环山长廊");
	set("long", @LONG
	距离那火光越来越近了，但却感觉不到那火热的气息，
	反而是给人一种祥和的感觉，令人觉得十分的温暖。


LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "westup" : __DIR__"M10",
  "eastdown" : __DIR__"M12b",
]));

	setup();
}
