//open/prayer/room/westarea/road21.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","街道");
        set("long",@LONG
	西武林自成一格的街道, 四通八达, 处处繁华. 此处是西域
	的中心, 往北边走可以到达圣火教的总坛. 四方则分别是圣
	火八天门各门的座落位置..
LONG);

        set("outdoors", "/open/prayer");
        set("exits", ([ /* sizeof() == 4 */
        "north":__DIR__"road17",	//街道
	"south":__DIR__"road25",	//街道
	"east":__DIR__"road20",		//街道
	"west":__DIR__"road22",		//街道

        ]) );
        set("no_fight", 0);
        
  setup();
}
