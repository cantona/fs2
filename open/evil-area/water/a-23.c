inherit ROOM;
#include <ansi.h>

void create ()
{
	set("short",HIC"琰 扬 湖"HIG" 同 心 桥 "NOR);
	set("long",@LONG
你走在石制的桥上，脚底下踩着厚实的石块却还是有晃动的感觉
，你心想，难不成桥快要垮了不成？想了想，你开始加紧脚步离去～
LONG);
	set("evil_area",1);
	set("no_transmit",1);
	set("exits",([
"west":__DIR__"a-01",
"east":__DIR__"a-24",
]));
	setup();
}

 