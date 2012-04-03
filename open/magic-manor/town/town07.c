inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "西镇道");
        set ("long", @LONG
云风镇的西边道路，道路的两旁边种满了各式花花草草，让你走
在此路上觉得格外愉快，镇上的居民也是很亲切，看见了你还不时的
向你打招呼，往北边是武器店，南边是西往桥，东边是北镇道。
LONG);  
        set("exits", ([ /* sizeof() == 4 */
        "north"  : __DIR__"town01",
        "south"  : __DIR__"town13",
        "east"   : __DIR__"town08",
]));
        setup();
}
