//open/prayer/room/kiyan/19.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","总管的书房");
        set("long",@LONG

	开阳门总管的书房, 这里是总管处理门务的地方. 总管是门主以下
	与副门主同一职等的干部..专门负责门内事务的处理. 东边是往走
	廊的方向. 总管正在抄写门主所批发下来的卷宗!!

LONG);

        set("exits", ([ /* sizeof() == 3 */
        "northeast":__DIR__"16",	//总管房
        "southeast":__DIR__"18",	//总管房
        "east":__DIR__"17",		//总管房
       
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/general-manager" : 1,		//总管
   		
]));
     
  setup();
}
