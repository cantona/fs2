//open/prayer /zhenche/1.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","阵势门大厅");
        set("long",@LONG

        阵势门大厅装潢给人一种豪迈爽朗的感觉. 两旁的客椅一
        字排开, 直到厅尾. 用的都是西域的上等木材所制! 大厅
        右边站着一位右护法.

LONG);
        set("exits", ([ /* sizeof() == 2 */
        "south":__DIR__"4",             //大厅
        "west":__DIR__"2",              //门主
 
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
        "/open/prayer/npc/right" : 1,           //右护法
]));
  setup();
}

