inherit ROOM;
#include <ansi.h>

void create ()
{
	set("short",HIC"琰 扬 湖"NOR);
	set("long",@LONG
在你的身旁走动着不少奇形怪状的生物，不是头上长个角就是身
上多了几条触须，不过每一个生物似乎都已经习惯了生活周遭活动着
不一样的生物，你也渐渐的习惯了这种感觉...
LONG);
	set("evil_area",1);
	set("no_transmit",1);
	set("objects",([
__DIR__"npc/mob01":1,
__DIR__"npc/mob02":1,
]));
	set("exits",([
"west":__DIR__"enter",
"east":__DIR__"a-23",
"south":__DIR__"a-22",
"north":__DIR__"a-02",
]));
	setup();
}

 