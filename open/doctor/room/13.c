#include <room.h>
inherit ROOM;
void create()
{
        set("short","副门主房");
        set("long",@LONG
在书房的一角，副门主正在跟一位弟子交待注意事项，看来那位弟
子可能不小心犯了一点小错，还好副门主心肠不错，不然可就惨了，被
罚针扎可不是好玩的。

LONG);

        set("exits", ([ /* sizeof() == 2 */
        "north":__DIR__"12",            
        "northeast":__DIR__"10",

        ]) );
        set("light_up", 1);
        set("objects",([ /* sizeof() == 2 */
   "/open/doctor/npc/vice-chair" : 1,
   "/open/doctor/npc/trainee2" : 1,    

]));

  setup();
}


