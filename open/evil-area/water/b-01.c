inherit ROOM;
#include <ansi.h>

void create ()
{
	set("short",HIG"琰 扬 居"NOR);
	set("long",@LONG
琰扬居是位于琰扬湖上的一个建筑物，外观富丽堂皇，在人间而
言，里面住的一定是达官贵人，可是，这里面可谓之家徒四壁，一点
有价值的东西都没有，除了那亮丽的外观以外...
你目前正伫立于琰扬居的厅堂，往南前往大厅中央，往西通往厨房，
往外走就是琰扬湖的同心桥。
LONG);
	set("evil_area",1);
	set("no_transmit",1);
	set("exits",([
"out":__DIR__"a-26",
"east":__DIR__"b-02",
"south":__DIR__"b-09",
]));
	setup();
}

 