//open/prayer/room/uhen/8.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","议事厅");
        set("long",@LONG

	在厅上可以见到许多较高职位的门徒，一个个面目严肃
	站在那里，等候着向门主报告份内的职责，以便能让门
	主适时的处理掉棘手的问题．

LONG);
        set("exits", ([ /* sizeof() == 3 */
        "north":__DIR__"5",		//议事厅
        "east":__DIR__"7",		//议事厅
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
        "/open/prayer/npc/major-officer" : 1,		
]));

   setup();
}
