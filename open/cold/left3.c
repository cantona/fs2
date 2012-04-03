// Room: /u/c/chhu/workroom.c
#include "../cold.h"

inherit ROOM;

void create()
{
	set("short","芦格小径");
	set("long", @LONG
由寒谷的西侧神殿再向西行来到这里「芦格小径”，在这里，你可以
看到寒谷中另一奇特景象「芦格”，在西面的峭壁上有着成千上外的小
格子，相传是寒谷一派开山祖师练习仙法所留下的奇景，后人称之为「
芦格”。

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
	"east":COLD_ROOM"left2",
	"northwest":COLD_ROOM"left5",
]));
	set("objects",([
	]));
	setup();
	replace_program(ROOM);
}
