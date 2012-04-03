//open/prayer/room/westarea/road3.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","街道");
        set("long",@LONG
	西武林自成一格的街道, 四通八达, 处处繁华. 往东北方可
	以到达圣火教的总坛. 西方则可以到达"白虎宫"与"天机门"
	. 白虎宫是新兴起的另一个派门的分支, 可是却很少听说有
	人见过或碰过此一门派的门徒!!
LONG);

        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 2 */
        "east":__DIR__"road1",		//街道
        "west":__DIR__"road5",		//街道
 
        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() ==  1*/
	"/open/prayer/npc/woman2" : 1,		
        ]) );

    setup();
}
