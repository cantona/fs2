inherit ROOM;
#include <ansi.h>

void create ()
{
	set("short",HIC"琰 扬 湖"NOR);
	set("long",@LONG
往西边望去，似乎有一座建筑物在那，北边的路已经被沙丘给挡
住而无法通行。
LONG);
	set("evil_area",1);
	set("no_transmit",1);
	set("exits",([
"east":__DIR__"a-06",
"west":__DIR__"a-04",
]));
	setup();
}

 