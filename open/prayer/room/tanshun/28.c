//open/prayer/room/tanshun/28.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","总管的书房");
        set("long",@LONG

        这里就是总管书房的最内部了! 天璇门的总管正在这里
        办公. 看他愁眉不展的样子, 好像是在苦思开源节流的
        可能途径! 往北是通往走廊的方向.

LONG);

        set("exits", ([ /* sizeof() == 3 */
        "northwest":__DIR__"24",                //总管房
        "northeast":__DIR__"22",                //总管房
        "north":__DIR__"23",            //总管房
       
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
        "/open/prayer/npc/general-manager" : 1,         //总管
                
]));
     
  setup();
}
