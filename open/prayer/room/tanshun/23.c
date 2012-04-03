//open/prayer/room/tanshun/23.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","总管的书房");
        set("long",@LONG

	天璇门总管的书房, 这里是总管处理门务的地方. 总管
	是门主以下与副门主同一职等的干部..专门负责门内事
	务的处理. 北边是往走廊的方向.

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
