//open/prayer/room/tangi/tangi1-2.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","天机门大厅");
        set("long",
"整座大厅的装潢除了充满庄严之外，特别还有一股文人雅士的气息．壁上四处可见
大型的泼墨画，与门主的品味互相融合．厅上所站立的是天机门的右护法．右护法后
面是天机门的地牢!\n");
        set("exits", ([ /* sizeof() == 2 */
        "east":"/open/prayer/room/tangi/tangi1-4",		//地牢
        "west":"/open/prayer/room/tangi/tangi1",			//门主
 
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/right2" : 1,		//右护法
]));
  setup();
}

int valid_leave(object me, string dir)
{
        if(dir=="up"&&present("hu-fa right",environment(me)))
return notify_fail("右护法双眼直瞪着你 ,说道:想进地牢,要经过总管同意才行!\n");
        return ::valid_leave(me,dir);
}
