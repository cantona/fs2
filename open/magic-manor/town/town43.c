inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "小森林");
        set ("long", @LONG
从草原一路再走来，两旁的小草不知何时已渐渐的换成较高大的
树木了，你不时的还要挥剑劈开两旁挡路的小树枝，动物们的叫声也
愈来愈狂。
LONG);  
        set("exits", ([ /* sizeof() == 4 */
        "east"	: __DIR__"town44",
        "west"	: __DIR__"town42",
	]));

        setup();
}