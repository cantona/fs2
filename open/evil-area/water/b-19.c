inherit ROOM;
#include <ansi.h>

void create ()
{
	set("short",HIG"琰 扬 居 -- 后 院"NOR);
	set("long",@LONG
你站立于后院的西北角，地上已经没有砖瓦铺地，而是一片黄土
，这里没什么特别的，在你的南边有一棵大树，东南方似乎有一座马
厩。
LONG);
	set("evil_area",1);
	set("no_transmit",1);
	set("exits",([
"south":__DIR__"b-20",
"east":__DIR__"b-18",
]));
	setup();
}

 