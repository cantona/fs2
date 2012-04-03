//open/prayer/tanshun/10.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","副门主房");
        set("long",@LONG

        这里是副门主的书房, 不过看样子副门主并不在这里,
        只有一位弟子正在整理副门主的书桌. 从这往西是通往
        走廊的方向.

LONG);

        set("exits", ([ /* sizeof() == 3 */
        "northwest":__DIR__"11",                //副门主室
        "southwest":__DIR__"13",                //副门主室
        "west":__DIR__"12",             
 
        ]) );
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/trainee4" : 1,              //弟子
                
]));
     
  setup();
}
