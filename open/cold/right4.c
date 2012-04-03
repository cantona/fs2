// Room: /u/c/chhu/workroom.c
#include "../cold.h"

inherit ROOM;

void create()
{
	set("short","劝修园");
	set("long", @LONG
这里便是寒谷东侧行宫前的「劝修园”，是寒谷一派的门弟子
平常修习仙法、武术之处，在平时，众师姊妹们聚在一起，互相研
习仙法，互相切搓武艺，以及宫主有时也会来此探视门弟子练习的
情形。

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
	"north":COLD_ROOM"right3",
]));
	set("objects",([
	COLD_NPC"trainee2":1,
	COLD_NPC"trainee3":1,
	]));
	setup();
	replace_program(ROOM);
}
