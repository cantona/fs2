//u/r/rence/room/tanshun/4.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","议事厅");
        set("long",@LONG

        在议事厅的东边有位教头正在仔细聆听总教头的报告, 听
        到不以为然处时, 则轻轻地摇头, 不过听到总教头称赞他
        的功劳时, 又深深地同意..

LONG);
        set("exits", ([ /* sizeof() == 3 */
        "south":__DIR__"7",             //议事厅
        "north":__DIR__"1",             //议事厅
        "west":__DIR__"5",              //议事厅
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
        "/open/prayer/npc/general" : 1,         //教头
]));

   setup();
}
