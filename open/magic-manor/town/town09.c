inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "北镇道");
        set ("long", @LONG
云风镇的北边道路，道路的两旁边种满了各式花花草草，让你走
在此路上觉得格外愉快，镇上的居民也是很亲切，看见了你还不时的
向你打招呼，往北边是道具店，南边是一个广场，东边接着北镇道。
西边是北边道。
LONG);  
        set("exits", ([ /* sizeof() == 4 */
        "north"  : __DIR__"town03",
        "south"  : __DIR__"town15",
        "east"   : __DIR__"town10",
        "west"   : __DIR__"town08",
]));
        setup();
}
