inherit ROOM;
#include <ansi.h>

void create ()
{
	set("short",HIG"琰 扬 居"NOR);
	set("long",@LONG
一个由木板隔置于两旁的通道，感觉上十分的狭窄漆黑，往北通
往大厅，往西通往后厢房。
LONG);
	set("evil_area",1);
	set("no_transmit",1);
	set("exits",([
"north":__DIR__"b-12",
"west":__DIR__"b-14",
]));
	setup();
}

 