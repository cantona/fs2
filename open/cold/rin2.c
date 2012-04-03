// Room: /u/c/chhu/workroom.c
#include "../cold.h"

inherit ROOM;

void create()
{
	set("short","东厢房");
	set("long", @LONG
这里是东侧厢房，里头住的是寒谷弟子中资历较浅者，
由于寒谷一派只收年轻美貌的女子，所以，来到这，你不禁
大叹一生，在这里，个个都是美若天仙、有顷国顷城姿色的
绝世美女。

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
	"west":COLD_ROOM"rin1",
]));
	set("objects",([
	COLD_NPC"trainee5":1,
	COLD_NPC"trainee6":1,
	]));
	setup();
	replace_program(ROOM);
}
