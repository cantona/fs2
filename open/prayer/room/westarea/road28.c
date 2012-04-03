//open/prayer/room/westarea/road28.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","街道");
        set("long",@LONG
	西武林自成一格的街道, 四通八达, 处处繁华. 浑天水晶的存
	放地点只有教主本人才会知道, 至于圣火八天门的门主则均是
	由教主亲自传授的, 所以他们也不知道浑天水晶的下落. 东边
	可以到达圣火教支门的"开阳门"与"阵势门". 西边是南北纵向
	的专用道路.
LONG);

        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 2 */
        "east":__DIR__"road27",		//街道
        "west":__DIR__"road29",		//街道
 
        ]) );
        
        set("no_fight", 0);
        
  setup();
}
