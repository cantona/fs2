//open/prayer/room/tanshun/11.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","副门主房");
        set("long",@LONG

        天璇门内最近公务繁忙, 不得已只好多拉几个弟子来帮忙
        . 不过看他们专心工作的情形, 好像一点抱怨也没有, 对
        教内高层的命令完全地服从!

LONG);

        set("exits", ([ /* sizeof() == 2 */
        "south":__DIR__"12",            //副门主室
        "southeast":__DIR__"10",                
 
        ]) );
        set("light_up", 1);
        set("objects",([ /* sizeof() == 2 */
   "/open/prayer/npc/trainee2" : 1,             //弟子
   "/open/prayer/npc/trainee3" : 1,             //弟子
                
]));
     
  setup();
}
