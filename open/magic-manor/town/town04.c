inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "一般民宅");
        set ("long", @LONG
走进这间屋子，里面的摆设很简单，所有的家俱都打扫的一尘不
染，在你左侧的墙上挂了两张字画，仔细一看墨迹犹干未干的，似是
完成未久的两幅作品。
LONG);  
        set("exits", ([ /* sizeof() == 4 */
        "south"  : __DIR__"town10",
]));
        set("light_up", 1);
        setup();
}
