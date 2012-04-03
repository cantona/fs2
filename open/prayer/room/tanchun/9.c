//open/prayer/room/tanchun/9.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","议事厅");
        set("long",@LONG

	在厅上站立着许多较高职位的门徒，他们一个个心事重重的样子
	，等候着向门主报告份内的职责，以便能让门主适时的处理掉棘
	手的问题．

LONG);
        set("exits", ([ /* sizeof() == 2 */
        "north":__DIR__"6",		//议事厅
        "east":__DIR__"8",		//议事厅
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/vice-manager" : 1,		
]));

   setup();
}
