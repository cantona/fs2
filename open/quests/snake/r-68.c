inherit ROOM;

void create()
{
	set("short","蛇寨 蛇王座");
	set("long",@LONG
这里也有一座蛇型石雕的座椅，但是除了披上一层蛇皮以外，就
与平常所见的座椅没两样。
LONG);
	set("no_transmit",1);
	set("objects",([
__DIR__"npc/master_snake":1,
]));
	set("exits",([
"south":__DIR__"r-67",
]));
	setup();
}
