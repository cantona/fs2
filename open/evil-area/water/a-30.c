inherit ROOM;
#include <ansi.h>

void create ()
{
	set("short",HIC"琰 扬 湖 旁"NOR);
	set("long",@LONG
琰扬湖旁的一个小空地，地上画满了很多的小图形，感觉上似乎
是一处小孩子在游乐玩耍的地方。
LONG);
	set("evil_area",1);
	set("no_transmit",1);
	set("exits",([
"north":__DIR__"a-17",
]));
	set("objects",([
__DIR__"npc/child":1,
]));
	setup();
}

 