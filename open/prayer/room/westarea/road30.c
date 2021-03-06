//open/prayer/room/westarea/road30.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","街道");
        set("long",@LONG
	西武林自成一格的街道, 四通八达, 处处繁华. 往东北方可以
	到达圣火教的总坛. 西方则可以到达圣火教支部的"玉衡门"与
	"瑶光门" .北边则是钱庄. 圣火教的分级制度非常明显, 教主
	以下有[文武星君]的职等, 此两人的学艺素养分别是一文一武
	, 造诣已然出神入化.
LONG);

        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 3 */
        "north":__DIR__"r1-15.c",	//钱铺
        "east":__DIR__"road21",		//街道
        "west":__DIR__"road23",		//街道
 
        ]) );
        
        set("no_fight", 0);
        set("objects",([ /* sizeof() ==  1*/
	"/open/prayer/npc/high-man3" : 1,		
        ]) );
    setup();
}
