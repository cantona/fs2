inherit ROOM;
#include <ansi.h>
#include <damage_water.c>

void create()
{
	set("short","沙漠");
	set("long",@LONG
火热般的大地不断的消耗着你对于生命的看法，你渐渐地有轻生
的念头，只想赶紧的脱离这个走不出去的大地与杀不完的邪兽，你毫
无意识的走到了这里，四处高耸的沙丘挡住了你的去路，你无奈着低
头，却发现了一个奇怪的图形，就画在地上...
LONG);
        set("light_up",-1);
	set("no_transmit",1);
	set("evil_area",1);
	set("item_desc",([
"图形":"
   奇形怪状的图案画满了整个地上，大略上是呈现一个圆形的图案，
图案中，写着一些密密麻麻的奇异字型，感觉上，似乎踏进入(enter)
咒术阵内，就会发生什么事情...\n",
]));
	set("exits",([
"west":__DIR__"a-21",
]));
	setup();
}
