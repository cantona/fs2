//open/prayer/room/tangi/tangi1-45.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","总管房");
        set("long",
"总管的专属办公厅.因为总管是女性,所以整间房里都是女性的护卫人员.西边是总管
的书桌,北边是往走廊.\n");

        set("exits", ([ /* sizeof() == 2 */
        "north":"/open/prayer/room/tangi/tangi1-44",		//总管室
	"west":"/open/prayer/room/tangi/tangi1-42",		//总管室
       
        ]) );
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/paltoon1" : 1,		//保镳
   		
]));
     
  setup();
}
