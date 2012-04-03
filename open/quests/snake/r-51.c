inherit ROOM;

void create()
{
	set("short","蛇寨 中厅");
	set("long",@LONG
在你的正北方摆设着一只石雕大蛇，两旁则不断的传来阵阵的血
腥味与药水味，往南则有一个回廊，通往蛇寨二层。
LONG);
	set("no_transmit",1);
	set("objects",([
__DIR__"npc/crazy_snake":2,
]));
	set("exits",([
"east":__DIR__"r-50",
"west":__DIR__"r-52",
"south":__DIR__"r-56",
]));
	setup();
}
