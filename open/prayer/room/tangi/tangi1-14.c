//open/prayer/room/tangi/tangi1-14.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","议事厅");
        set("long",
"副总教头面目严肃站在那里，等候着向门主报告份内的职责，看他眉头深锁可能
是门内的保安出了问题了！上次刺客潜入的事件到现在还没有解决．难怪他心神
紧张!\n");
        set("exits", ([ /* sizeof() == 2 */
        "north":"/open/prayer/room/tangi/tangi1-11",		//议事厅
        "east":"/open/prayer/room/tangi/tangi1-15",		//议事厅
        ]) );
        set("no_fight", 0);
        set("light_up", 1);  
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/major-officer" : 1,		//副总教头
]));

   setup();
}
