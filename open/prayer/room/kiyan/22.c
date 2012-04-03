//open/prayer/room/kiyan/22.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","练武场");
        set("long",@LONG

	开阳门的练武场, 练武场上的弟子正在修练内功. 只见每位弟
	子盘坐在地, 个个面额汗水斗大如珠, 汗流浃背, 不过体格上
	却也比一般弟子来的强健多了.

LONG);

        set("outdoors", "/open/prayer/room");
        set("exits", ([ /* sizeof() == 2 */
        "north":__DIR__"15",		
        "east":__DIR__"21",	
 
        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 2 */
  "/open/prayer/npc/trainee1" : 1,		//弟子
  "/open/prayer/npc/trainee3" : 1,		//弟子
   		
]));
     
  setup();
}
