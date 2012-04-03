inherit ROOM;
#include <ansi.h>

void create ()
{
	set("short",HIC"琰 扬 湖"NOR);
	set("long",@LONG
轻飘而来的花香扑鼻，你忍不住的陶醉其中，回想着人间各地，
似乎也只有烟雨江南才能与此地相抗衡，风光景色，优美鸟啼，细雨
轻飘，如诗如画，你几乎已经忘了自己身处恐怖的邪灵界了。
往西边望去，似乎有一座建筑物在那，北边两旁均有沙丘围绕着，在
沙丘的凹陷处，有一栋土堆堆成的半圆形住屋，你可以看到在其住屋
的顶部，有一个排气孔，正不断的冒着黑烟，你忍不住的抱怨起，在
如此的地方竟然会有人排放着呜烟。
LONG);
	set("evil_area",1);
	set("no_transmit",1);
	set("objects",([
__DIR__"npc/mob02":2,
]));
	set("exits",([
"north":__DIR__"a-27",
"east":__DIR__"a-07",
"west":__DIR__"a-05",
]));
	setup();
}

 