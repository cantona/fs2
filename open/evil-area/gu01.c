inherit ROOM;
#include <ansi.h>

void create()
{
	set("short","万蛊洞");
	set("long",@LONG
洞内爬行着许多的蛊虫。
LONG);
	set("evil_area",1);
	set_temp("can_hatch",1);
	set("exits",([
"east":__DIR__"gu02",
]));
	setup();
}