inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "攀岩道");
        set ("long", @LONG
历经了一番的辛劳，你终于登上了长白山上的攀岩道，在这一片
广大的岩道上，无情的山风吹向你，让你快站不住脚，溼冷的空气濔
漫在空气之中，你只能继续的往上爬，却始终看不见山顶。
LONG);
        set("outdoors", "");
        set("exits", ([ /* sizeof() == 4 */
        "up"      : __DIR__"mon37",
        "down"    : __DIR__"mon35",
]));
        setup();
}
