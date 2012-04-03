//open/prayer/room/tanchun/2.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","天权门大厅");
        set("long",@LONG

	整座大厅的摆设不外乎是兵器方面的事物，特别是在西边墙上的
	那一把擎天神戟．这把擎天戟由精钢铸成，整把兵器重有三百斤
	，与门主的膂力互相配合后, 使将起来其威力足可开石劈柱．厅
	上所站立的是天权门的右护法．

LONG);
        set("exits", ([ /* sizeof() == 2 */
        "south":__DIR__"4",		//大厅
        "west":__DIR__"2",		//门主
 
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/right" : 1,		//右护法
]));
  setup();
}

