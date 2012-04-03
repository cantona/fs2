// Room: /u/c/chhu/workroom.c
#include "../cold.h"

inherit ROOM;

void create()
{
	set("short","神殿正厅");
	set("long", @LONG
这儿便是神殿的正厅，在厅前正中央的是玄冰寒谷开山祖师的
神像，据说当年，玄冰寒谷的开山祖师即是在此处坐化成仙的，所
后代门弟子为感念祖师，因此在此处盖了间神殿，世代祭拜。

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
	"east":COLD_ROOM"lin4",
	"north":COLD_ROOM"lin2",
	"west":COLD_ROOM"lin3",
	"out":COLD_ROOM"left2",
]));
	set("objects",([
	]));
	setup();
	replace_program(ROOM);
}
