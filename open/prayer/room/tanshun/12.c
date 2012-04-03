//open/prayer/room/tanshun/12.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","副门主房");
        set("long",@LONG

        一进入办公房, 可以很显地感受到一股紧张忙碌的气氛.
        有两个弟子正在整理文件, 准备送给副门主过目. 从这儿
        往东直达副门主书房, 往西则是走廊的方向.

LONG);

        set("exits", ([ /* sizeof() == 4 */
        "north":__DIR__"11",            //副门主室
        "south":__DIR__"13",            //副门主室
        "west":__DIR__"14",             //走廊
        "east":__DIR__"10",             //副门主室
 
        ]) );
        set("light_up", 1);
        set("objects",([ /* sizeof() == 2 */
   "/open/prayer/npc/trainee1" : 1,             //弟子
   "/open/prayer/npc/trainee3" : 1,             //弟子
                
]));
     
  setup();
}
