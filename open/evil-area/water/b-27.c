inherit ROOM;
#include <ansi.h>

void create ()
{
	set("short",HIG"琰 扬 居 -- 后 院"NOR);
	set("long",@LONG
你站立于后院的东北角，地上已经没有砖瓦铺地，而是一片黄土
，这里没什么特别的，在你的南边有一座马厩，西南方似乎有一棵大
榕树。
LONG);
	set("evil_area",1);
	set("no_transmit",1);
	set("exits",([
"south":__DIR__"b-22",
"west":__DIR__"b-18",
]));
	setup();
}

 