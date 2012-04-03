//open/prayer/room/youkoun/21.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","练武场");
        set("long",@LONG

        在练武场的西南角, 有两个女弟子正目不转睛地看着场中
        师姊们的示范. 看她们这么努力学习的样子, 真是令人感
        动! 只是不知道她们的武学程度到底如何?

LONG);

        set("outdoors", "/open/prayer");
        set("exits", ([ /* sizeof() == 2 */
        "north":__DIR__"18",            
        "east":__DIR__"20",     
 
        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 2 */
  "/open/prayer/npc/trainee1" : 1,              //弟子
  "/open/prayer/npc/trainee3" : 1,              //弟子
                
]));
     
  setup();
}
