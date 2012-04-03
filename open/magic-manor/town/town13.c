inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "西往桥");
        set ("long", @LONG
位处在云风镇的西边重要道路上的小桥，若要进入此镇，此桥是
非经过不可的，这座桥是用石头的材质铺成，历经几千几万个风风雨
雨的日子仍然是如此坚固。
LONG);  
        set("exits", ([ /* sizeof() == 4 */
        "north"  : __DIR__"town07",
        "south"  : __DIR__"town19",
        "west"   : __DIR__"town38",
]));
        setup();
}
