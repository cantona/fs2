inherit ROOM;
#include <ansi.h>

void create ()
{
	set("short",HIC"琰 扬 湖"NOR);
	set("long",@LONG
两旁的沙丘高耸，你有一种快窒息的压迫感～眼前有一座土堆堆
置而成的屋子，在屋顶的排气孔还不断的冒着黑烟，感觉上十分的诡
异。
LONG);
	set("evil_area",1);
	set("no_transmit",1);
	set("exits",([
"south":__DIR__"a-06",
"enter":__DIR__"a-31",
]));
	setup();
}

 