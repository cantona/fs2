inherit ROOM;
#include <way.c>

void create()
{
	set("short","蛇寨 置物室");
	set("long",@LONG
这是一个半大不小的密闭空间，你可以看到西北方有一个蛇型的
座椅，不过如果说是蛇寨寨主的王座，似乎又显得有点小气，周遭摆
满了许多的黄金与珠宝，看来这里是放置宝物的地方。
LONG);
	set("no_transmit",1);
	set("objects",([
__DIR__"npc/snake_soldier":1,
"/obj/money/gold":5,
]));
	set("exits",([
"west":__DIR__"r-05",
"north":__DIR__"r-18",
]));
	setup();
}
