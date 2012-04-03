// Room: /open/main/room/M14.c

inherit ROOM;

void create()
{
	set("short", "昆仑山顶");
	set("long", @LONG
这长廊不知道有多长多高，环绕着山而上，直
入云雾中。

LONG
	);
	set("exits", ([ /* sizeof() == 3 */
	"westdown" : __DIR__"r3",
	"north" : __DIR__"m1",
]));
	set("outdoors", "1");

	setup();
}
