// Room: /open/main/room/M13b.c

inherit ROOM;

void create()
{
	set("light_up",1);
	set("short", "环山长廊");
	set("long", @LONG
	朦胧的云雾，令人分不清时刻与方向，若要继续往
	上走，只有沿着山壁的方向向上行走了。


	
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "westup" : __DIR__"M12b",
  "eastdown" : __DIR__"M14a",
]));

	setup();
}
