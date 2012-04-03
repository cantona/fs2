//open/prayer/room/tangi/tangi1-30.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","练武场");
        set("long",
"天机门的练武场,场上到处可见练功的门生. 东边是大门,北边则可以通往议事厅\n");

        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 2 */
        "north":"/open/prayer/room/tangi/tangi1-25",		//练武场
	"east":"/open/prayer/room/tangi/tangi1-31",		//练武场
       
        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/trainee4" : 3,		//弟子
   		
]));
     
  setup();
}
