inherit ROOM;
#include <ansi.h>

void create ()
{
	set("short",HIG"琰 扬 居"NOR);
	set("long",@LONG
在你身旁摆放着一张石桌，石桌旁摆放着一些小石凳，石桌上摆
着一些素果与鲜花，给人一种朴素的亲切感，很显然的你可以猜测到
，这张石桌是用来进食用的。
东西两旁各有一个通道，往北可通往大厅出入口。
LONG);
	set("evil_area",1);
	set("no_transmit",1);
	set("exits",([
"west":__DIR__"b-11",
"east":__DIR__"b-10",
"north":__DIR__"b-01",
]));
	setup();
}

 