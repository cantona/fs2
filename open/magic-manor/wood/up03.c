inherit ROOM;
#include <ansi.h>

string *exit = ({ __DIR__"wood13",__DIR__"wood14",__DIR__"wood15",__DIR__"wood16",});

void create()
{
        set("short","楼梯");
        set("long", "一个极其简单的直立式楼梯，历经常年的岁月洗礼，已变的破旧
不堪，可以通往灵塔四楼。\n");
        set("exits", ([
	"up"	: exit[random(sizeof(exit))],
        ]));
        set("light", 1);
	set("no_auc", 1);
	set("no_transmit",1);
        setup();

}

