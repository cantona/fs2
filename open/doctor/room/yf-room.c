#include <ansi.h>
inherit ROOM;

void create ()
{
    set ("short", RED"闭关室"NOR);
    set ("long", @LONG
这里似乎是一间不小的房间，虽然是乌漆妈黑的，但还感觉得出
空间还算颇为空旷的，但这里阴森森的气氛，令你感到一阵阵毛骨悚
然，忽然从你后方传来微弱的脚步声，使你几乎要吓破胆了...
LONG);

    set("objects", ([
         "/open/doctor/npc/yunfon" : 1,
]));
    set("light_up", 1);
    setup();
}

