inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "云风西道");
        set ("long", @LONG
走到这里，你好似来到一个繁华的地方，不远处还传来阵阵小孩
的嘻闹声，走道被修饰的整齐清洁，来往的人潮也渐渐的多了，让你
有一股温暖的感觉。
LONG);  
        set("exits", ([ /* sizeof() == 4 */
        "east"	: __DIR__"town13",
        "west"	: __DIR__"town41",
	]));

        setup();
}
