//open/prayer/room/kiyan/6.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","议事厅");
        set("long",@LONG

	在厅上可以见到许多较高职位的干部，一个个面目严肃
	站在那里，等候着向门主报告份内的职责，以便能让门
	主适时的处理掉棘手的问题!!厅上站立者是教头．

LONG);
        set("exits", ([ /* sizeof() == 2 */
        "north":__DIR__"3",		//右护法
        "west":__DIR__"7",		//议事厅
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 2 */
	"/open/prayer/npc/general" : 1,		//教头
	"/open/prayer/npc/man5" : 1,		
	]));

	setup();
}
