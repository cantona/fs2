inherit ROOM;
#include <ansi.h>

void create ()
{
	set("short",HIC"琰 扬 湖"NOR);
	set("long",@LONG
往湖泊的中心望去，你似乎看到有一座建筑物正漂浮于湖面上，
尽管你十分的想涉水而过，不过你的理智阻止了你这么做，对于从未
知晓的湖泊，你连里面有活动着什么生物都不晓得，还是小心点好。
LONG);
	set("evil_area",1);
	set("no_transmit",1);
	set("exits",([
"north":__DIR__"a-22",
"south":__DIR__"a-20",
]));
	setup();
}

 