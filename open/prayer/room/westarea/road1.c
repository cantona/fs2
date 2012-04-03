//open/prayer/room/westarea/road1.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","街道");
        set("long",@LONG
	西武林自成一格的街道, 四通八达, 处处繁华, 往北边就是
	西域圣火教的总坛所在地了. 路两旁的棕榈树枝, 随风摇曳
	, 给人一种很舒适的感觉 .
LONG);

        set("outdoors", "/open/prayer");
        set("exits", ([ /* sizeof() == 4 */
       	"north":"/open/prayer/room/1-door2",		//街道
	"south":__DIR__"road9",	//街道
	"east":__DIR__"road2",	//街道
	"west":__DIR__"road3",	//街道
 
        ]) );
        
        set("no_fight", 0);
    setup();
}

