// Room: /u/c/chhu/workroom.c
#include "../cold.h"

inherit ROOM;

void create()
{
	set("short","霜雨道");
	set("long", @LONG
这条路就是寒谷有名的霜雨道，在一年四季里，由于这里的地形
奇特，造成这里为寒谷中，寒风交集之处，因此每每降下大量的冰霜
，冰霜多的像雨一般的飘零，故此处被称为寒谷奇景之一的霜雨道。

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
	"west":COLD_ROOM"right1",
	"east":COLD_ROOM"right3",
]));
	set("objects",([
	]));
	setup();
	replace_program(ROOM);
}
