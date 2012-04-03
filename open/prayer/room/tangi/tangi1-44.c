//open/prayer/room/tangi/tangi1-44.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","总管室");
        set("long",
"总管的专属办公厅.因为总管是女性,所以整间房里都是女性的护卫人员.西边是总管
的书桌,东边是往走廊.\n");

        set("exits", ([ /* sizeof() == 4 */
        "north":"/open/prayer/room/tangi/tangi1-43",		//总管室
	"south":"/open/prayer/room/tangi/tangi1-45",		//总管室
	"east":"/open/prayer/room/tangi/tangi1-24",		//走廊
        "west":"/open/prayer/room/tangi/tangi1-41",		//总管室
 
        ]) );
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/paltoon2" : 1,		//保镳
   		
]));
     
  setup();
}
