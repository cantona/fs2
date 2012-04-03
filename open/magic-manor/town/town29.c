inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "南镇道");
        set ("long", @LONG
云风镇的南边道路，道路的两旁边种满了各式花花草草，让你走
在此路上觉得格外愉快，镇上的居民也是很亲切，看见了你还不时的
向你打招呼，往北边是云风钱庄，南边接着当铺，东边是东镇道。西
边则仍是南镇道。
LONG);  
        set("exits", ([ /* sizeof() == 4 */
        "north"  : __DIR__"town23",
        "south"  : __DIR__"town35",
        "east"   : __DIR__"town30",
        "west"   : __DIR__"town28",

]));
        setup();
}