inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "云风东道");
        set ("long", @LONG
走到这里，你好似来到一个繁华的地方，不远处还传来阵阵小孩
的嘻闹声，走道被修饰的整齐清洁，来往的人潮也渐渐的多了，让你
有一股温暖的感觉。而东方的密林，是大家所害怕去的地方，因为有
许多的镇民，走进去之后就再也出不来了，所以都不敢随便的进入。
LONG);  
        set("exits", ([ /* sizeof() == 4 */
        "east"	: __DIR__"town42",
        "west"	: __DIR__"town24",
	]));

        setup();
}
