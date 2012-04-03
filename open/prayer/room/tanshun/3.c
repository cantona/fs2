//u/r/rence/room/tanshun/3.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","天璇门大厅");
        set("long",@LONG

        这里站着一位左护法, 与右护法专职保护门主的重要工作
        . 其后是一座绣工精美的屏风, 正对着大厅右方的大幅泼
        墨画, 两者相互辉映!

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

