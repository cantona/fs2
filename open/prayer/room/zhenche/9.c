//u/r/rence/room/zhenche/9.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","议事厅");
        set("long",@LONG

        在议事厅的西南角, 有一位副总管正向门主报告这一个月
        来的收支情形. 看他一脸凝重的样子, 好像对这近的经济
        不景气也感到很无奈..

LONG);
        set("exits", ([ /* sizeof() == 2 */
        "north":__DIR__"6",             //议事厅
        "east":__DIR__"8",              //议事厅
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
        "/open/prayer/npc/vice-manager" : 1,            
]));

   setup();
}
