//open/prayer/tanshun/15.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","练武场");
        set("long",@LONG

        在练武场的东北角, 有两个弟子正在裹伤! 原来是看到总
        教头在旁边, 想力求表现, 结果不慎弄伤了脚踝..往东则
        是通往副门主办公房的走廊.

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
