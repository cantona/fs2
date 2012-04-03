// Room: /u/c/chhu/workroom.c
#include "../cold.h"

inherit ROOM;

void create()
{
set("short","静格小轩");
	set("long", @LONG
这里是寒谷的「静格小轩”，在寒谷一派开山祖师初来到寒谷之
时，尚未有宝珍神宫及行宫、神殿等，在那时寒谷一派的开山祖师便
是居住在此，名曰「静格小轩”，在轩内虽然什么简陋，却有着一股
前人深着的气息存在。

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
	"southeast":COLD_ROOM"left3",
]));
	set("objects",([
	]));
	setup();
	replace_program(ROOM);
}
