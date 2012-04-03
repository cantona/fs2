//u/r/rence/room/zhenche/4.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","议事厅");
        set("long",@LONG

        在议事厅的东边有位教头正在仔细聆听门主的吩咐. 看他
        汗颜的样子, 显然门主并不满意最近门生练武的情形. 尤
        其三年一度的比武大会又快到了, 难怪门主会不高兴.

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
