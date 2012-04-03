//open/prayer/room/youkoun/13.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","总管的书房");
        set("long",@LONG

        一进入总管的书房, 就有一个保镳猛盯着你瞧! 似乎在防
        犯你闹事. 看看四周, 其实也没有什么好值得你闹事的,
        真是穷紧张!

LONG);

        set("exits", ([ /* sizeof() == 4 */
        "north":__DIR__"12",            //总管房
        "south":__DIR__"14",            //总管房
        "east":__DIR__"11",             //总管房
        "west":__DIR__"15",             //总管房
       
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
        "/open/prayer/npc/paltoon2" : 1,                //保镳
                
]));
     
  setup();
}
