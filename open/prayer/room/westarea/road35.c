//open/prayer/room/westarea/road35.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","街道");
        set("long",@LONG
	西武林自成一格的街道, 四通八达, 处处繁华. 北边是往阵势
	门, 南边是往玄武宫. 玄武宫是飘渺城四个分部之一. 有关圣
	火教的绝学浑天心法, 只能去找教主问个明白了!!
LONG);

        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 3 */
        "north":__DIR__"road32",	//街道
	"south":__DIR__"road40",	//街道
	"west":__DIR__"road36",		//街道
 
        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() ==  1*/
	"/open/prayer/npc/man2" : 1,		
        ]) );
  setup();
}
