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
__DIR__"npc/poison_soldier":3,
]));
	set("exits",([
"south":__DIR__"r-39",
"east":__DIR__"r-37",
]));
	setup();
}
