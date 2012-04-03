//open/prayer/room/zhenche/13.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","副门主房");
        set("long",@LONG

        在书房的一角, 副门主正在跟一位弟子交待注意事项! 看
        来那位弟子可能不小心犯了一点小错. 还好副门主心肠不
        错, 不然可就惨了.

LONG);

        set("exits", ([ /* sizeof() == 2 */
        "north":__DIR__"12",            //副门主室
        "northeast":__DIR__"10",                
 
        ]) );
        set("light_up", 1);
        set("objects",([ /* sizeof() == 2 */
   "/open/prayer/npc/vice-chair" : 1,           
   "/open/prayer/npc/trainee3" : 1,             //弟子
                
]));
     
  setup();
}
