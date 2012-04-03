#include <room.h>
inherit ROOM;
void create()
{
        set("short","副门主房");
        set("long",@LONG
银针门每天公务都很繁忙，因此有几个弟子每天都要来帮忙，不过
看他们专心工作的情形，好像一点抱怨也没有，完全服从上级的指示。

LONG);

        set("exits", ([ /* sizeof() == 2 */
        "south":__DIR__"12",          
        "southeast":__DIR__"10",

        ]) );
        set("light_up", 1);
        set("objects",([ /* sizeof() == 2 */
   "/open/doctor/npc/trainee2" : 1,            
   "/open/doctor/npc/trainee1" : 1,  

]));

  setup();
}

