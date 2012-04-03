//open/prayer/room/tangi/tangi1-21.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","练武场");
        set("long",
"此处是明教分部之一的天机门的练武场,练武场上总教头正严厉地指导着门生们努
力练功. 往北是天机门的玄关,进入后则是大厅.两侧的走廊是分别通往总管与副门
主的办公房.\n");

        	set("outdoors", "/u/r/rence");
        	set("no_fight", 0);
	set("exits", ([ /* sizeof() == 4 */
        	"north":"/open/prayer/room/tangi/tangi1-17",		//玄关
	"south":"/open/prayer/room/tangi/tangi1-26",		//练武场
	"east":"/open/prayer/room/tangi/tangi1-22",		//走廊
	"west":"/open/prayer/room/tangi/tangi1-20",		//走廊
 
        ]) );
        
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/general-officer" : 1,		//总教头
   		
]));
        
          setup();
}
