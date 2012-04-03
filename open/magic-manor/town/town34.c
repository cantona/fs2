inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "醉云居");
        set ("long", @LONG
简单的一间居所，居所名称高雅独特，里面更住了一位神秘的人
物，对于他的来历，镇上的人都不清楚，只知道他喜爱收藏宝物，而
这样一间简单的房子，却不知其所收藏的宝物都藏那去了。
LONG);  
        set("exits", ([ /* sizeof() == 4 */
        "north"  : __DIR__"town28",
	]));

	set("objects", ([ /* sizeof() == 1 */
	"/open/sky/npc/seller" : 1,
	]));

        setup();
}