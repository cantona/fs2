#include <room.h>
inherit ROOM;
void create()
{
        set("short","银针门偏厅");
        set("long", @LONG

    角落那里摆了一张石几和几张石椅，华陀的徒弟正坐在那为师父
磨针，旁边是一排白鹤图样的木制屏风，后面是一张木床，那是华陀
给人开膛剖腹用的，也就是所谓的手术间了。

LONG
        );
        set("exits", ([ /* sizeof() == 3 */
        "east":__DIR__"2",     
        "south":__DIR__"6",
        "west":__DIR__"29",

        ]) );
        set("light_up", 1);
        set("objects", ([ /* sizeof() == 1 */
  "/open/doctor/npc/liu" : 1,
]));
  setup();
}



