// Room: /open/main/room/M11.c

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
  "eastup" : __DIR__"M12a",
  "eastdown" : __DIR__"M12",
]));
	set("outdoors", "1");

	setup();
}
