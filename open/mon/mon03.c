inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "荒凉小径");
        set ("long", @LONG
眼前的景像，让你有些些的迷网了，因为你已快找不到前面的去
路了，四周的景像一片荒凉，不远处的前方隐隐可以看到一间房子，
让你振奋了精神继续往前行走。
LONG);
        set("outdoors", "");
        set("exits", ([ /* sizeof() == 4 */
        "east" : __DIR__"mon02",
        "west" : __DIR__"mon04",
]));
        setup();
}

