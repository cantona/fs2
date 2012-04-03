inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "北镇道");
        set ("long", @LONG
云风镇的北边道路，道路的两旁边种满了各式花花草草，让你走
在此路上觉得格外愉快，镇上的居民也是很亲切，看见了你还不时的
向你打招呼，往北边是一间普通的民宅，南边是一个广场，东边仍然
接着北镇道。西边也是接着北边道。
LONG);  
        set("exits", ([ /* sizeof() == 4 */
        "north"  : __DIR__"town04",
        "south"  : __DIR__"town16",
        "east"   : __DIR__"town11",
        "west"   : __DIR__"town09",
]));
        setup();
}
