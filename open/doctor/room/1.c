#include <ansi.h>
#include <room.h>
inherit ROOM;
void create()
{
        set("short","银针门偏厅");
        set("long", @LONG

    银针门的偏厅，墙壁上面挂着一幅扁鹊的画，上面记载着「银针
门创立人--扁鹊，数十年前走遍大江南北，以义诊为号召，精湛的医
术，仁厚的心肠，致使中原一带，颇传佳誉。”

LONG
        );
        set("exits", ([ /* sizeof() == 2 */
        "south":__DIR__"4",             
        "west":__DIR__"2",
        "out":__DIR__"r1",           

        ]) );
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
        "/open/doctor/npc/hwa" : 1, 
]));
  setup();
}
int valid_leave(object me, string dir)
{
        if (me->query("class")!="doctor" && dir=="out")
        return notify_fail("外面是银针门私有的药圃，因为你不是医者，基于道德上，你的良心不允许你进入。!\n");
        return ::valid_leave(me,dir);
        }



