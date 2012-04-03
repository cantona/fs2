//open/prayer/room/kiyan/3.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","开阳门大厅");
        set("long",@LONG

	整座大厅的装潢除了充满庄严之外，特别还有一股文人雅士的气
	息．壁上四处可见大型的泼墨画，与门主的品味互相融合．厅上
	所站立的是开阳门的右护法．

LONG);
        set("exits", ([ /* sizeof() == 3 */
        "south":__DIR__"6",	//大厅
        "east":__DIR__"2",		//书房
        "west":__DIR__"4",		//门主
 
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/right" : 1,		//右护法
]));
  setup();
}

int valid_leave(object me, string dir)
{
        if(dir=="east"&&present("hu-fa right",environment(me)))
return notify_fail("右护法微笑说道:想进书房唸书呀!好好加油呀!!\n");
        return ::valid_leave(me,dir);
}
