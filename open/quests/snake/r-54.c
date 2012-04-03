inherit ROOM;

void create()
{
	set("short","蛇寨 中厅");
	set("long",@LONG
你的眼睛扫过放置于墙角旁的柜子，上面摆满了密密麻麻的药罐
，一旁放置着一些刑具与刑台，上面还有几条被剥了皮的蛇，与拔了
毒牙的蛇，还不断的蠕动着，看起来十分的恶心。
LONG);
	set("no_transmit",1);
	set("objects",([
__DIR__"npc/crazy_snake":2,
]));
	set("exits",([
"east":__DIR__"r-55",
"south":__DIR__"r-53",
]));
	setup();
}
