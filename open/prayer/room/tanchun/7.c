//open/prayer/room/tanchun/7.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","议事厅");
        set("long",@LONG

	在厅上可以见到许多较高职位的门徒，一个个面目严肃站在那里     
	，等候着向门主报告份内的职责，以便能让门主适时的处理掉棘  
	手的问题。

LONG);
        set("exits", ([ /* sizeof() == 2 */
        "north":__DIR__"4",		//议事厅
        "west":__DIR__"8",		//议事厅
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/general-officer" : 1,		
]));

   setup();
}
