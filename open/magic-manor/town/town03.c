inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "道具店");
        set ("long", @LONG
各式各样的道具陈列在店中，在店中还有陈列许多新奇的东西，
都是平常鲜少见的到的，让你的眼界大开。此间店也是云风镇中道具
杂货卖的最齐全的。
LONG);  
        set("exits", ([ /* sizeof() == 4 */
        "south"  : __DIR__"town09",
]));
        set("light_up", 1);
        setup();
}
