inherit ROOM;
#include <ansi.h>

void create()
{
	set("short",HIC"火神舞幻空"NOR);
	set("long",@LONG
你踏入了石屋内的某一个房间中，四周并没有墙壁，若硬是要说
是的话，四周那流动的七彩光应该就算是了吧。
LONG);
	set("objects",([
__DIR__"npc/rose_finch":1,
]));
	set("exits",([
"west":__DIR__"t01",
]));
	set("no_die_room",1);
	setup();
}