//open/prayer/room/kiyan/16.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","总管的书房");
        set("long",@LONG

	开阳门总管的书房, 这里是总管处理门务的地方. 总管是门主以
	下与副门主同一职等的干部..专门负责门内事务的处理. 东边是
	往走廊的方向.

LONG);

        set("exits", ([ /* sizeof() == 2 */
        "southeast":__DIR__"19",		//总管房
        "south":__DIR__"17",		//总管房
       
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 2 */
  "/open/prayer/npc/paltoon1" : 1,		//保镳
  "/open/prayer/npc/paltoon2" : 1,		//保镳
   		
]));
     
  setup();
}
