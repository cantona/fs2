inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "北镇道");
        set ("long", @LONG
云风镇的北边道路，道路的两旁边种满了各式花花草草，让你走
在此路上觉得格外愉快，镇上的居民也是很亲切，看见了你还不时的
向你打招呼，往北边是防具店，南边是一间旅店，东边接着北镇道。
西边是西边道。
LONG);  
        set("exits", ([ /* sizeof() == 4 */
        "north"  : __DIR__"town02",
        "south"  : __DIR__"town14",
        "east"   : __DIR__"town09",
        "west"   : __DIR__"town07",
]));
        setup();
}
