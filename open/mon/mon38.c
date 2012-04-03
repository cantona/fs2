inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "上峰坡");
        set ("long", @LONG
要登上长白山的顶端，这是一个重要的通道，但却通往不同的三
个峰，东边是通往「山随峰”，北边是通往「白怀峰”，西边是通往
「长情峰”。另外还有一条路是通往南边的路，却不知要通往何方。
LONG);
        set("outdoors", "");
        set("exits", ([ /* sizeof() == 4 */
        "east"        : __DIR__"mon39",
        "north"       : __DIR__"mon43",
        "west"        : __DIR__"mon44",
        "down"        : __DIR__"mon37",
        "southdown"   : __DIR__"mon54",
]));
        setup();
}
