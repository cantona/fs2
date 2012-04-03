//open/prayer /tanshun/2.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","天璇门大厅");
        set("long",@LONG

        整座大厅的装潢除了风格端庄之外, 特别还有一股文人雅
        士的气息. 壁上四处可见大型的泼墨画, 更衬托出门主的
        气质. 厅上所站立的是天璇门的右护法.

LONG);
        set("exits", ([ /* sizeof() == 2 */
        "south":__DIR__"4",             //大厅
        "west":__DIR__"2",              //门主
 
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
        "/open/prayer/npc/right" : 1,           //右护法
]));
  setup();
}

