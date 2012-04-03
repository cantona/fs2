// Room: /open/main/room/M14.c

inherit ROOM;

void create()
{
	set("short", "环山长廊");
	set("long", @LONG
朦胧的云雾，令人分不清时刻与方向，若要继续往
上走，只有沿着山壁的方向向上行走了。
LONG
	);
	set("exits", ([ /* sizeof() == 3 */
	"westdown" : __DIR__"r2",
	"eastup" : __DIR__"r4",
]));
	set("outdoors", "1");

	setup();
}
