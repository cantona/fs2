inherit ROOM;

void create()
{
	set("short","蛇寨 中厅");
	set("long",@LONG
在一旁可以看到许多的蛇笼，笼内放置着一些身体颜色鲜艳的蛇
类，一些你从未看过的蛇种，直觉上你就能够猜测到那些蛇都带有剧
毒，还是不要碰的好。
LONG);
	set("no_transmit",1);
	set("objects",([
__DIR__"npc/crazy_snake":1,
]));
	set("exits",([
"east":__DIR__"r-51",
"west":__DIR__"r-53",
"north":__DIR__"r-55",
]));
	setup();
}
