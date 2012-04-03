//open/prayer/room/tangi/tangi1-22.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","走廊");
        set("long",
"天机门的走廊，走廊上可见到跑门正在辛劳的四处奔波，走廊的廊顶是使用上等的
西域桧木建造的，随时都会散发出特有的桧木香．西边与南边是练武场，顺着走廊
则可以到达副门主的办公房．\n");

        set("outdoors", "/u/r/rence");
        set("no_fight", 0);
	set("exits", ([ /* sizeof() == 3 */
        "south":"/open/prayer/room/tangi/tangi1-27",		//练武场
	"east":"/open/prayer/room/tangi/tangi1-23",		//走廊
        "west":"/open/prayer/room/tangi/tangi1-21",		//走廊
 
        ]) );
        
  setup();
}
