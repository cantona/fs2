inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "旅店");
        set ("long", @LONG
云风镇中的一间旅店，提供休息和住宿的地方，让远道而来的旅
客们有一个温暖的休息地方。整间旅店看来不过数十坪大，但是却可
以提供十余个床位。
LONG);  
        set("exits", ([ /* sizeof() == 4 */
        "north"  : __DIR__"town08",
]));
        set("light_up", 1);
        setup();
}
