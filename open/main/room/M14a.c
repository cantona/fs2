// Room: /open/main/room/M14a.c

inherit ROOM;

void create()
{
	set("short", "环山长廊");
	set("long", @LONG
	再往上长廊就完全没入云雾中，朦胧间似乎看到不远
	处有东西在燃烧。


LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "westup" : __DIR__"M13b",
  "westdown" : __DIR__"M13a",
]));
	set("outdoors", "1");

	setup();
}
