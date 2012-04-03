// Room: /u/c/chhu/workroom.c
#include "../cold.h"

inherit ROOM;

void create()
{
	set("short","行宫内厅");
	set("long", @LONG
这边是行宫的后厅，寒谷一派弟子平时没事时，
偶尔会来此处聚集，谈天闲聊的，好不热闹，此外
每当有重要聚会时，也都会在此处招开，这里可以
算是寒谷的娱乐天地。

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
	"south":COLD_ROOM"rin1",
	"north":COLD_ROOM"rin5",
]));
	set("objects",([
	]));
	setup();
	replace_program(ROOM);
}
