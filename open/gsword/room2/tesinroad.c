//tesinroad
#include <ansi.h>
inherit ROOM;

void create()
{
        set("short", HIW"竹林小道"NOR);
        set("long", @LONG
通过天地破魔迷阵之后..你不经意的走到了一个布满竹林的乡间小径...
小径似乎只能往前方前进...不过.在你后方..竟出现了一个神奇的传送区
传送区内闪耀着奇异的光芒...。
LONG
        );
        set("exits", ([ /* sizeof() == 3 */
 "north":"/open/gsword/room2/tesinroad1.c",
 "back":"/open/gsword/room/g5-1.c",

]));
        set("light_up",1);
        set("no_transmit", 1);
        setup();
}
