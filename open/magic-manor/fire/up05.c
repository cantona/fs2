inherit ROOM;
#include <ansi.h>

string *exit = ({ __DIR__"fire21",__DIR__"fire22",__DIR__"fire23",__DIR__"fire24",});

void create()
{
        set("short","楼梯");
        set("long", "一个极其简单的直立式楼梯，历经常年的岁月洗礼，已变的破旧
不堪，可以通往灵塔六楼。\n");
        set("exits", ([
	"up"	: exit[random(sizeof(exit))],
        ]));
        set("light", 1);
	set("no_auc", 1);
	set("no_transmit",1);
        setup();

}

