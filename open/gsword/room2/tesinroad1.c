//tesinroad
#include <ansi.h>
inherit ROOM;

void create()
{
        set("short", HIW"竹林小道"NOR);
        set("long", @LONG
通过天地破魔迷阵之后..你不经意的走到了一个布满竹林的乡间小径...
小径似乎只能往前方前进...。
LONG
        );
        set("exits", ([ /* sizeof() == 3 */
 "north":"/open/gsword/room2/tesinroad2.c",
 "south":"/open/gsword/room2/tesinroad.c",

]));
        set("light_up",1);
        set("no_transmit", 1);
        setup();
}
