inherit ROOM;
#include <ansi.h>

void create ()
{
	set("short",HIG"琰 扬 居"NOR);
	set("long",@LONG
走道上，阳光透过窗户，照进了琰扬居内，你正行走于厨房与大
厅间的通道，窗户在走道的北边，而南边是紧闭的门槛，在门槛内，
你猜测那大概是客房吧...尽管偶尔会传来阵阵凄凉的哭声...
LONG);
	set("evil_area",1);
	set("no_transmit",1);
	set("exits",([
"west":__DIR__"b-01",
"east":__DIR__"b-03",
]));
	setup();
}

 