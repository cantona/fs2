// Room: /u/c/chhu/workroom.c
#include "../cold.h"

inherit ROOM;

void create()
{
	set("short","神殿侧室");
	set("long", @LONG
这里是神殿的侧室，在里头所存放的是一些祭祀用的用品，
掌管神殿的主教总是叫负责的弟子，每天作好悸祀的事宜，并且
将用品在此放置好来。

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
	"west":COLD_ROOM"lin1",
]));
	set("objects",([
	]));
	setup();
	replace_program(ROOM);
}
