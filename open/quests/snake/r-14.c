inherit ROOM;
#include <way.c>

void create()
{
	set("short","蛇寨 二层");
	set("long",@LONG
石制的蛇寨显得十分的坚固，你正位于蛇寨前栋，东西两旁，各
自放置着一张木桌与许多的椅子，看来这层是供蛇寨的守卫休息的地
方。
LONG);
	set("objects",([
__DIR__"npc/snake_soldier_1":3,
]));
	set("exits",([
"west":__DIR__"r-13",
"east":__DIR__"r-15",
]));
	setup();
}
