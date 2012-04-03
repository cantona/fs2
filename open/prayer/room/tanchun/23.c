//open/prayer/room/tanchun/23.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","总管的书房");
        set("long",@LONG

	天权门总管的书房, 这里是总管处理门务的地方. 总管不喜欢男
	性进入其办公房, 所以会要求守卫的保镳确实执行此一命令..北
	边是往走廊的方向.

LONG);

        set("exits", ([ /* sizeof() == 4 */
        "north":__DIR__"18",		//总管房
        "south":__DIR__"28",		//总管房
        "east":__DIR__"22",		//总管房
        "west":__DIR__"24",		//总管房
       
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/paltoon2" : 1,		//保镳
   		
]));
     
  setup();
}
