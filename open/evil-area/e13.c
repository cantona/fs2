inherit ROOM;
#include <ansi.h>
#include <road.msg>

void create ()
{
	set("short",BBLU+YEL"震邪道"NOR);
	set("long",
(: print_road_msg :)
);
	set("no_transmit",1);
        set("light_up",-1);
	set("exits",([
"west":__DIR__"e12",
"south":__DIR__"e14",
]));
	set("objects",([
__DIR__"npc/spider-girl":1,
]));
	setup();
}

int valid_leave(object me,string dir)
{
	if(dir=="south")
	{
		if(present("evil-ghost",environment(me)) || present("evil-clever",environment(me)) || present("spider-girl",environment(me)))
			return notify_fail("在此地的邪灵们阻挡住了你的去路。\n");
	}
return 1;
}