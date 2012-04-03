// Room: /u/c/chhu/workroom.c
#include "../cold.h"

inherit ROOM;

void create()
{
	set("short","行宫正厅");
	set("long", @LONG
这里是行宫的正厅，由于寒谷一派的弟子一向过着规律的生活
，每天一大早，所有弟子都要在这里集合，然后，在总教师教授完
技法之后，再一起到「劝修园”去练习。

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
	"west":COLD_ROOM"rin3",
	"east":COLD_ROOM"rin2",
	"north":COLD_ROOM"rin4",
	"out":COLD_ROOM"right3",
]));
	set("objects",([
	]));
	setup();
	replace_program(ROOM);
}
