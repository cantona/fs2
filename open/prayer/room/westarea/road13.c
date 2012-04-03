//open/prayer/room/westarea/road13.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","街道");
        set("long",@LONG
	这里是一个十字路口, 往北边走可以到达圣火教的总坛. 往西
	走可以到天机, 天璇门. 北边有一间商店, 往东去是一条邪气
	漫漫的高耸山脉!!
LONG);

        set("outdoors", "/open/prayer");
        set("exits", ([ /* sizeof() == 4 */
       	"north":__DIR__"road9",		//街道
	"south":__DIR__"road17",	//街道
	"east":__DIR__"road12",		//街道
	"west":__DIR__"road14",		//街道

        ]) );
        set("no_fight", 0);
        
  setup();
}
