//u/r/rence/room/tanshun/6.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","议事厅");
        set("long",@LONG

        在议事厅的西方站在一位副总教头. 听到总教头在向门主
        报告督促弟子练武的情形时, 一时兴奋, 也就不时地补充
        一两句. 两人一搭一唱, 比那说相声的还有默契!

LONG);
        set("exits", ([ /* sizeof() == 3 */
        "north":__DIR__"3",             //议事厅
        "south":__DIR__"9",             //议事厅
        "east":__DIR__"5",              //议事厅
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
        "/open/prayer/npc/major-officer" : 1,           
]));

   setup();
}
