// Room: /u/c/chhu/workroom.c
#include "../cold.h"

inherit ROOM;

void create()
{
	set("short","东侧小路");
	set("long", @LONG
这里是宝珍神宫东侧的一条笔直小路，路上铺着一粒粒细细的小石子
，往东直行便是东侧行宫，据说，在行宫里住的全都是寒谷一派的弟子
，而在东侧行宫前是一座大型的校场，是平常寒谷弟子们修练之处。

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
	"west":COLD_ROOM"home1",
	"east":COLD_ROOM"right2",
]));
	set("objects",([
	]));
	setup();
	replace_program(ROOM);
}
