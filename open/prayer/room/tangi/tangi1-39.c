//open/prayer/room/tangi/tangi1-39.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","总管的书房");
        set("long",
"天机门总管的书房,这里是总管处理门务的地方.总管是门主以下与副门主同一职等的
干部..专门负责门内事务的处理.东边是往走廊的方向.\n");

        set("exits", ([ /* sizeof() == 1 */
        "east":"/open/prayer/room/tangi/tangi1-41",		//总管房
       
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 2 */
  "/open/prayer/npc/general-manager" : 1,		//总管
  "/open/prayer/npc/foreman" : 1,			//镳头
   		
]));
     
  setup();
}
