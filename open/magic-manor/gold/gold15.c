inherit ROOM;
#include <ansi.h>
#include <gold.msg>
#include <damage04.c>

string *exit = ({ __DIR__"gold13",__DIR__"gold14",__DIR__"gold15",__DIR__"gold16",});

void create()
{
        set("short","��������¥");
        set("long", (: printf_msg :) );
        set("exits", ([
	"south"	: exit[random(sizeof(exit))],
	"north"	: exit[random(sizeof(exit))],
	"east"	: exit[random(sizeof(exit))],
	"west"	: exit[random(sizeof(exit))],
        ]));
        set("light", 1);
	set("no_auc", 1);
	set("no_transmit",1);
        setup();

}

