inherit ROOM;
#include <way.c>

void create()
{
	set("short","蛇寨");
	set("long",@LONG
这里放置着一张木桌与许多的椅子，看来是供蛇寨的守卫休息的
地方，东边有着一个石制的蛇雕，看起来栩栩如生。
LONG);
	set("objects",([
__DIR__"npc/snake_soldier_1":2,
]));
	set("exits",([
"west":__DIR__"r-03",
"north":__DIR__"r-09",
]));
	setup();
}
