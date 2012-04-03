inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "北峰道");
        set ("long", @LONG
往北边走，一是条较为平顺的道路，两旁的风景已是雪白一片，
几乎看不到任何生物的踪迹，凄冷的寒风更显得路途的悲凉与大自然
的无情。
LONG);
        set("outdoors", "");
        set("exits", ([ /* sizeof() == 4 */
        "north"    : __DIR__"mon46",
        "south"    : __DIR__"mon38",
]));
        setup();
}
