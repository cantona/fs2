// Room: /u/c/chhu/workroom.c
#include "../cold.h"

inherit ROOM;

void create()
{
	set("short","神龙道");
	set("long", @LONG
这里是由神殿正厅通往非凡神间的通道，寒谷门人称之为
「神龙道”，只是为何称作「神龙道”尚未可知。

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
	"east":COLD_ROOM"lin1",
	"west":COLD_ROOM"lin5",
]));
	set("objects",([
	]));
	setup();
	replace_program(ROOM);
}
