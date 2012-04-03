//open/prayer/room/zhenche/11.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","副门主房");
        set("long",@LONG

        阵势门每天公务都很繁忙, 因此有几个弟子每天都要来
        帮忙. 不过看他们专心工作的情形, 好像一点抱怨也没
        有. 完全服从上级的指示!

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
