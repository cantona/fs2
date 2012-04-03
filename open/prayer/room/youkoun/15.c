//open/prayer/room/youkoun/15.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","总管的书房");
        set("long",@LONG

        这里是总管处理门务的地方. 总管是门主以下与副门主同
        一职等的干部..专门负责门内事务的处理. 从这一直往东
        走可到达练武场.

LONG);

        set("exits", ([ /* sizeof() == 3 */
        "northeast":__DIR__"12",        //总管房
        "southeast":__DIR__"14",        //总管房
        "east":__DIR__"13",             //总管房
       
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
        "/open/prayer/npc/general-manager" : 1,         //总管
                
]));
     
  setup();
}
