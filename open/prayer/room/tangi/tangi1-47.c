//open/prayer/room/tangi/tangi1-47.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","副门主房");
        set("long",
"天机门副门主的办公房.西边是往走廊的方向,东边是往副门主的书房. \n");

        set("exits", ([ /* sizeof() == 4 */
        "north":"/open/prayer/room/tangi/tangi1-46",		//副门主室
	"south":"/open/prayer/room/tangi/tangi1-48",		//副门主室
	"west":"/open/prayer/room/tangi/tangi1-28",		//走廊
        "east":"/open/prayer/room/tangi/tangi1-50",		//副门主室
 
        ]) );
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/trainee1" : 1,		//弟子
   		
]));
     
  setup();
}
