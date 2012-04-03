//open/prayer/room/tangi/tangi1-36.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","厨房");
        set("long",
"天机门的厨房,全门上上下下的伙食都要靠它呢!!\n");

        set("exits", ([ /* sizeof() == 4 */
        "north":"/open/prayer/room/tangi/tangi1-29",		//走廊
	"south":"/open/prayer/room/tangi/tangi1-38",		//厨房
	"east":"/open/prayer/room/tangi/tangi1-37",		//厨房
        "west":"/open/prayer/room/tangi/tangi1-35",		//厨房
 
        ]) );
             set("light_up", 1);

  setup();
}
