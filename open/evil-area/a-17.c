inherit ROOM;
#include <ansi.h>
#include <damage.c>
#include <way01.msg>

void create()
{
	set("short","ɳĮ");
	set("long",
(: printf_msg :)
);
        set("light_up",-1);
	set("no_transmit",1);
	set("evil_area",1);
	set("exits",([
"north":__DIR__"a-16",
"south":__DIR__"a-18",
"east":__DIR__"a-21",
]));
	setup();
}
