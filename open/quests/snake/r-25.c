inherit ROOM;
#include <way.c>

void create()
{
	set("short","蛇寨 地下室");
	set("long",@LONG

		～　一片漆黑，什么也看不到 ～

LONG);
	set("no_transmit",1);
	set("objects",([
__DIR__"npc/poison_soldier":1,
]));
	set("exits",([
"north":__DIR__"r-26",
"west":__DIR__"r-24",
]));
	setup();
}
