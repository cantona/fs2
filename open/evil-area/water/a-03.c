inherit ROOM;
#include <ansi.h>

void create ()
{
	set("short",HIC"琰 扬 湖"NOR);
	set("long",@LONG
合适的温度，阵阵暖风吹拂着你的脸庞，你忍不住的打起了哈欠
，宁静的湖边，你可以看到几只魔兽正在舔舐着自己的肢体，仿佛柔
顺的猫一般，只是感觉上满不搭嘎的，你斜眼偷偷注视着它，它也正
呆望着你，或许在彼此的眼中，对方都是一个奇怪的生物吧...
LONG);
	set("evil_area",1);
	set("no_transmit",1);
	set("objects",([
__DIR__"npc/mob01":1,
]));
	set("exits",([
"south":__DIR__"a-02",
"north":__DIR__"a-04",
]));
	setup();
}

 