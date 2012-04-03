//open/prayer/room/tanshun/20.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","练武场");
        set("long",@LONG

        这里是练武场的正中央, 有两个天璇门的弟子正在切磋武
        艺! 看到他们的" 矬 "样, 令你不禁也想参一脚..不过胜
        败乃兵家常事, 一旦输了可别恼羞成怒喔!

LONG);

        set("outdoors", "/open/prayer/room");
        set("exits", ([ /* sizeof() == 4 */
           "north":__DIR__"16",         //练武场
        "south":__DIR__"26",            //练武场
        "west":__DIR__"21",             //练武场
        "east":__DIR__"19",             //练武场
 
        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 2 */
  "/open/prayer/npc/trainee3" : 1,              //弟子
  "/open/prayer/npc/trainee4" : 1,              //弟子
                
]));
     
  setup();
}
