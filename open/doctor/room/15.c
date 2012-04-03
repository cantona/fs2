#include <room.h>
inherit ROOM;
void create()
{
        set("short","练武场");
        set("long",@LONG
在练武场的东北角，有两个弟子正在沙盘推演，似乎对刚才所
学的步法有所领悟的样子。

LONG);

        set("outdoors", 1);
        set("exits", ([ /* sizeof() == 3 */
        "east":__DIR__"14",            
        "south":__DIR__"19",            
        "west":__DIR__"16",             

        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 2 */
  "/open/doctor/npc/trainee1" : 1,              
  "/open/doctor/npc/trainee2" : 1,            

]));

  setup();
}


