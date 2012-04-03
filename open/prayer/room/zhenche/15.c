//open/prayer/zhenche/15.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","练武场");
        set("long",@LONG

        在练武场的东北角, 有两个弟子正在沙盘推演, 似乎对
        才所学的阵法有所领悟的样子. 从这往东则是通往副门
        主办公房的走廊.

LONG);

        set("outdoors", "/open/prayer/room");
        set("exits", ([ /* sizeof() == 3 */
        "east":__DIR__"14",             //走廊
        "south":__DIR__"19",            //练武场
        "west":__DIR__"16",             //练武场
 
        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 2 */
  "/open/prayer/npc/trainee2" : 1,              //弟子
  "/open/prayer/npc/trainee4" : 1,              //弟子
                
]));
     
  setup();
}
