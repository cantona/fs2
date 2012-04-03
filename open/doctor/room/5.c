#include <room.h>
inherit ROOM;
void create()
{
        set("short","诊疗室");
        set("long", @LONG

    一个个清楚的穴道呈现在你眼前，有天灵穴、气海穴、曲池穴、
玉枕穴....等，看的你眼花辽乱，你不禁开始赞叹人体如此奥妙。

LONG
        );
        set("exits", ([ /* sizeof() == 4 */
        "north":__DIR__"2",             
        "south":__DIR__"8",             
        "east":__DIR__"4",              
        "west":__DIR__"6",             
        ]) );
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
        "/open/doctor/npc/patient1" : 1,        
]));
   setup();
}


