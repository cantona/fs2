//open/prayer/room/kiyan/18.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","总管的书房");
        set("long",@LONG

	开阳门总管的书房, 这里是总管处理门务的地方. 总管是门主以下
	与副门主同一职等的干部..专门负责门内事务的处理. 北边是往走
	廊的方向. 西北边是总管的所在地. 

LONG);

        set("exits", ([ /* sizeof() == 2 */
        "northwest":__DIR__"19",		//总管房
        "north":__DIR__"17",		//总管房
       
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/paltoon1" : 1,		//保镳
   		
]));
     
  setup();
}
