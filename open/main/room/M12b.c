// Room: /open/main/room/M12b.c

inherit ROOM;

void create()
{
	set("light_up",1);
	set("short", "环山长廊");
	set("long", @LONG
	走到这云雾已不如刚刚那样的浓密，可以确定的确有
	东西在燃烧，但奇特的是那火势一直保持着同样的大
	小，似乎不会受到山风吹袭的影响。


LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "westup" : __DIR__"M11a",
  "eastdown" : __DIR__"M13b",
]));

	setup();
}
