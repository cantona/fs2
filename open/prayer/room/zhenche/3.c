//u/r/rence/room/zhenche/3.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","阵势门大厅");
        set("long",@LONG

        这里站着一位左护法, 与右护法专职保护门主的重要工作
        . 看他雄纠纠气昂昂的样子, 就知道是训练有素的护法! 
        从你一踏入大厅开始, 他就已经在注意你的一举一动了!

LONG);
        set("exits", ([ /* sizeof() == 2 */
        "east":__DIR__"2",              //门主
        "south":__DIR__"6",                 
 
        ]) );
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
        "/open/prayer/npc/left" : 1,            //左护法
]));
  setup();
}

