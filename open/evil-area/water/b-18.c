inherit ROOM;
#include <ansi.h>

void create ()
{
	set("short",HIG"琰 扬 居 -- 后 院"NOR);
	set("long",@LONG
你正在站一个砖块作成的小阶梯上，往南望去，有一间木制的房
屋，那里应该就是后厢房了，在通往房屋的途中，有一块空地，空地
上有着马厩与一棵大榕树，往北则是回到大厅。
LONG);
	set("evil_area",1);
	set("no_transmit",1);
	set("exits",([
"north":__DIR__"b-17",
"south":__DIR__"b-21",
"east":__DIR__"b-27",
"west":__DIR__"b-19",
]));
	setup();
}

 