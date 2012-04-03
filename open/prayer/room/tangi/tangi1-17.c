//open/prayer/room/tangi/tangi1-17.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","玄关");
        set("long",
"天机门的玄关, 往里面进去便是天机门的议事厅(open door). 外面则是天机门的练武
场,练武场上到处都是练功强身的弟子.\n");
	set("outdoors", "/open/prayer/room"); 
        set("exits", ([ /* sizeof() == 2 */
        "north":"/open/prayer/room/tangi/tangi1-15",		//议事厅
        "south":"/open/prayer/room/tangi/tangi1-21",		//练武场
 
        ]) );
        
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/duty" : 2,		//值班弟子
   		
]));
        set("light_up", 1);
create_door("north","圣火刻纹木雕门", "south",DOOR_CLOSED);
  setup();
}
