inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "南镇道");
        set ("long", @LONG
云风镇的南边道路，道路的两旁边种满了各式花花草草，让你走
在此路上觉得格外愉快，镇上的居民也是很亲切，看见了你还不时的
向你打招呼，往北边是广场，南边接着蔬菜摊，东边是南镇道。西边
则是南镇道。
LONG);  
        set("exits", ([ /* sizeof() == 4 */
        "north"  : __DIR__"town21",
        "south"  : __DIR__"town33",
        "east"   : __DIR__"town28",
        "west"   : __DIR__"town26",

]));
        setup();
}