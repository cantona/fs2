//open/prayer/room/tangi/tangi1-48.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","副门主房");
        set("long",
"天机门副门主的办公房.北边是往走廊的方向,东边是往副门主的书房. \n");

        set("exits", ([ /* sizeof() == 2 */
        "north":"/open/prayer/room/tangi/tangi1-47",		//副门主室
	"east":"/open/prayer/room/tangi/tangi1-51",		//副门主室
       
        ]) );
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/trainee1" : 1,		//弟子
   		
]));
     
  setup();
}
