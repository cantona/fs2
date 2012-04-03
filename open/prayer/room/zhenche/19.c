//open/prayer/room/zhenche/19.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","练武场");
        set("long",@LONG

        在练武场的东方, 排着一整列的砖块, 有两个弟子正在练
        习劈砖! 不过劈了老半天, 好像都还没有找到窍门的样子
        , 看他们的手都已经肿起来了, 真是伤脑筋..

LONG);

        set("outdoors", "/open/prayer/room");
        set("exits", ([ /* sizeof() == 3 */
        "north":__DIR__"15",            //练武场
        "south":__DIR__"25",            //练武场
        "west":__DIR__"20",             //练武场
 
        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 2 */
  "/open/prayer/npc/trainee2" : 1,              //弟子
  "/open/prayer/npc/trainee3" : 1,              //弟子
                
]));
     
  setup();
}
