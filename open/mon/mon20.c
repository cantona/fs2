inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "碎石坡");
        set ("long", @LONG
路面的碎石愈来愈少，坡度愈稍微的慢慢减缓了，前面的景像有
些焕然一新的感觉，两旁的草木已轻轻的覆上了一层白雪，气温也愈
来愈低，若是一般常人也许走到这已是极限了。
LONG);
        set("outdoors", "");
        set("exits", ([ /* sizeof() == 4 */
        "westdown"   : __DIR__"mon19",
        "eastup"     : __DIR__"mon21",
]));
        setup();
}

