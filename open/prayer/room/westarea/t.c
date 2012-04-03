//open/prayer/room/westarea/road5.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","街道");
        set("long",@LONG
西武林自成一格的街道,四通八达,处处繁华.北边是白虎宫的入口处.南边则是到达
天机门.此处是一个三叉口!!行人众多,好不热闹.LONG);

        	set("outdoors", "/open/prayer/room");
        set("exits", ([ /* sizeof() == 3 */
        	"north":"/open/prayer/room/westarea/road7",		//街道
	"south":"/open/prayer/room/westarea/road10",	//街道
	"west":"/open/prayer/room/westarea/road3",		//街道
 
        ]) );
          set("objects", ([ /* sizeof() == 1 */
          "/open/prayer/npc/vendor" : 1,
        ]) );
        
        set("no_fight", 0);
    setup();
}
