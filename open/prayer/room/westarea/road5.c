//open/prayer/room/westarea/road5.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","街道");
        set("long",@LONG
	西武林自成一格的街道, 四通八达, 处处繁华. 北边是白虎宫的
	入口处. 南边则是到达天机门. 此处是一个三叉口!!行人众多, 
	好不热闹.
LONG);

       	set("outdoors", "/open/prayer/room");
       	set("no_fight", 0);
	set("exits", ([ /* sizeof() == 3 */
       	"north":__DIR__"road7",		//街道
	"south":__DIR__"road10",	//街道
           "east":__DIR__"road3",
        ]) );
        set("objects",([ /* sizeof() ==  1*/
  "/open/prayer/npc/vendor" : 1,		
        ]) );
        setup();
}
