inherit ROOM;
#include <ansi.h>

void create ()
{
	set("short",HIC"琰 扬 湖"NOR);
	set("long",@LONG
西边有一个木制的建筑物，上面挂着一个泛黄的招牌写着几个大
字，不过你似乎从未见过那种字体，北边已经是被山丘所挡住而无去
路，南边与东边则是琰扬湖的步道，你可以看到有许多的邪兽正在一
旁爬行着。
LONG);
	set("evil_area",1);
	set("no_transmit",1);
	set("exits",([
"south":__DIR__"a-03",
"east":__DIR__"a-05",
"west":__DIR__"a-28",
]));
	setup();
}

 