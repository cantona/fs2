inherit ROOM;
#include <way.c>

void create()
{
	set("short","蛇寨");
	set( "build", 12 );
	set("long",@LONG
蛇寨是由石头所组制而成的，在你的东西两旁，各有一个向上的
通道，正北方，也有一个石制的蛇型像，看起来十分的逼真，在蛇型
像的背后似乎也有着一到门...
LONG);
	set("objects",([
__DIR__"npc/snake_soldier":2,
]));
	set("exits",([
"out":__DIR__"r-01",
"west":__DIR__"r-07",
"east":__DIR__"r-06",
"north":__DIR__"r-03",
]));
	setup();
}
