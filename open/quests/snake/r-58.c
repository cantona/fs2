inherit ROOM;

void create()
{
	set("short","蛇寨 二层回廊");
	set("long",@LONG
这里是一个阴暗的回廊，你身在回廊中，偶尔会听到吵杂的交谈
声，看来你似乎离蛇寨的中心不远了。
LONG);
	set("no_transmit",1);
	set("objects",([
__DIR__"npc/crazy_snake":3,
]));
	set("exits",([
"east":__DIR__"r-59",
"down":__DIR__"r-57",
]));
	setup();
}
