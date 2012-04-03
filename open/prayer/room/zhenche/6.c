//u/r/rence/room/zhenche/6.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","议事厅");
        set("long",@LONG

        在议事厅的西方站在一位副总教头. 听到门主对门生的练
        武不满意时, 一时气馁无话可说, 只有默默低头接受门主
        的责备.

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
