// Room: /u/c/chhu/workroom.c
#include "../cold.h"

inherit ROOM;

void create()
{
	set("short","宫主卧房");
	set("long", @LONG
这里是宝珍神宫宫主也就是寒谷一派的掌门人的卧房，平常，
一般的外客是不能随便进来的，即使是门弟子也不可以说进来就进
来，没有什么特殊的事情，最好不要乱闯，以免宫主生气，后果可
以相当不得了的事。

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
	"south":COLD_ROOM"in4",
]));
	set("objects",([
	]));
	setup();
	replace_program(ROOM);
}
