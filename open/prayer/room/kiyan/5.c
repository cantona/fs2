//open/prayer/room/kiyan/5.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","开阳门大厅");
        set("long",@LONG

	整座大厅充满了中原人家的风格与景调，特别还有一股
	不属于圣火教这个门派的气息．墙上可见许多历代英雄
	人物的画像，充分衬托出门主的崇拜偶像心理．厅上所
	站立的是开阳门的左护法．后面是练功房的入口!!

LONG);
        set("exits", ([ /* sizeof() == 3 */
        "south":__DIR__"8",		//大厅
        "east":__DIR__"4",	        //门主
        "west":__DIR__"23",	        //练功房
 
        ]) );
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/left" : 1,		//左护法
]));
  setup();
}

int valid_leave(object me, string dir)
{
        if(me->query("class")!="prayer"&&dir=="west")
	return notify_fail("对不起, 里面是开阳门弟子的练功之地!!\n");
                      
	return ::valid_leave(me,dir);
}
