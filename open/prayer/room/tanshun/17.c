//open/prayer/room/tanshun/17.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","练武场");
        set("long",@LONG

        在练武场的西北方有两个弟子正在蹲马步. 原来是因为他
        们两个睡过头了, 所以被总教头处罚! 看他们一脸懊悔的
        样子, 好像也很自责! 往西是通往的总管书房的走廊.

LONG);

        set("outdoors", "/open/prayer/room");
        set("exits", ([ /* sizeof() == 3 */
        "east":__DIR__"16",             
        "south":__DIR__"21",            //练武场
        "west":__DIR__"18",     
 
        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 2 */
  "/open/prayer/npc/trainee1" : 1,              //弟子
  "/open/prayer/npc/trainee4" : 1,              //弟子
                
]));
     
  setup();
}
