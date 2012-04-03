inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "古亭");
        set ("long", @LONG
这是一座六角型的亭子，红色的亭柱，橙色的屋顶，亭中还摆放
了一张石桌，配上六张小圆椅，让长途劳累的旅人们可以在此好好的
休息。
LONG);
        set("outdoors", "");
        set("exits", ([ /* sizeof() == 4 */
        "east"  : __DIR__"mon07",
]));
        setup();
}

