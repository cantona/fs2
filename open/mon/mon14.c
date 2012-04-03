inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "平原小径");
        set ("long", @LONG
小道过后，这是一块比较平坦的地方，为崎岖不平的路途带来一
丝喘息的空间，前方不远处有一个小平台，另一个方向则是往上顶的
路，平坦的道路旁，草木长的比较兴盛，青翠的气息挥去了原先的枯
黄。
LONG);
        set("outdoors", "");
        set("exits", ([ /* sizeof() == 4 */
        "east"       : __DIR__"mon15",
        "westup"     : __DIR__"mon16",
        "eastdown"   : __DIR__"mon13",
]));
        setup();
}

