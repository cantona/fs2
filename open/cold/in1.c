// Room: /u/c/chhu/workroom.c
#include "../cold.h"

inherit ROOM;

void create()
{
	set("short","宝珍神宫内厅");
	set("long", @LONG
这里是宝珍神宫的内厅，通常宫主接见外客都是在这个地方
，一般而言，大厅是宫主处理内务之处，而内厅却是宫主办理外
务的地方，每当有重要外客来临之时，你会发现在宫主在此接待
外宾，而身旁则是一排负责奉茶的门弟子。

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
	"north":COLD_ROOM"in4",
	"west":COLD_ROOM"in2",
	"east":COLD_ROOM"in3",
	"south":COLD_ROOM"master_room",
]));
	set("objects",([
	]));
	setup();
	replace_program(ROOM);
}
