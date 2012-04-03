//open/prayer/room/tangi/tangi1-19.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","走廊");
        set("long",
"天机门的走廊，走廊上可见到跑门正在辛劳的四处奔波，走廊的廊顶是使用上等的
西域桧木建造的，随时都会散发出特有的桧木香．\n");

        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 2 */
        "south":"/open/prayer/room/tangi/tangi1-24",		//走廊
	"east":"/open/prayer/room/tangi/tangi1-20",		//走廊
       
        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/footman" : 1,		//跑堂
   		
]));
     
  setup();
}
