inherit ROOM;
#include <ansi.h>

void create ()
{
	set("short",HIC"琰 扬 湖"NOR);
	set("long",@LONG
漫步于琰扬湖旁，你有一种前所未有的舒适感，或许是周遭的生
物才会带给你如此强烈的感觉吧，先前只要在路上碰到此等生物，二
话不说，必定兵戎相见，现今却是相安无事的彼此做的彼此的事情，
所以你才会有这么强烈的感觉。
在一旁，你看到了一个摆着地摊的人类，地上摆满了许多新奇的东西
，你十分好奇着张望着。
LONG);
	set("evil_area",1);
	set("no_transmit",1);
	set("exits",([
"south":__DIR__"a-13",
"east":__DIR__"a-29",
"north":__DIR__"a-11",
]));
	setup();
}

 