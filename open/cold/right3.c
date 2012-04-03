// Room: /u/c/chhu/workroom.c
#include "../cold.h"

inherit ROOM;

void create()
{
	set("short","东侧行宫门口");
	set("long", @LONG
这里是寒谷的东侧行宫入口，由此处即可进入东侧行宫，往西通往
寒谷奇景「霜雨道”，往东则是「晚风亭”，往南通到「劝修园”即门
弟子平时练功之处。

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
	"west":COLD_ROOM"right2",
	"south":COLD_ROOM"right4",
	"east":COLD_ROOM"right5",
	"enter":COLD_ROOM"rin1",
]));
	set("objects",([
	]));
	setup();
	replace_program(ROOM);
}
