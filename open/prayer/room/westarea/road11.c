//open/prayer/room/westarea/road11.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","街道");
        set("long",@LONG
	西武林自成一格的街道, 四通八达, 处处繁华. 北边是往天
	枢门, 南边是往天权门. 西域自从圣火教入主以来, 已经好
	久没有战乱的发生了. 东边远望过去有一座高耸的山脉!!
LONG);

        set("outdoors", "/open/prayer");
        set("exits", ([ /* sizeof() == 3 */
       	"north":__DIR__"road8",		//街道
	"south":__DIR__"road16",	//街道
	"west":__DIR__"road12",		//街道
 
        ]) );
        set("no_fight", 0);
        
  setup();
}
