// Room: /open/main/room/M13a.c

inherit ROOM;

void create()
{
	set("short", "环山长廊");
	set("long", @LONG
	这长廊不知道有多长多高，环绕着山而上，直
	入云雾中。


LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "eastup" : __DIR__"M14a",
  "westdown" : __DIR__"M12a",
]));
	set("outdoors", "1");

	setup();
}
