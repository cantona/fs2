//open/prayer/room/tangi/tangi1-27.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","练武场");
        set("long",
"天机门的练武场,练武场上的弟子正在练功. 传闻圣火教的武学共有三套,其中之一的
浑天宝鉴心法,是女娲娘娘所遗留下来的武学!!修习之后不但能增强本身的内力!!更能
发挥许多另人叹为观止的惊人美技!!\n");

                set("outdoors", "/u/r/rence");
                set("exits", ([ /* sizeof() == 3 */
                "north":"/open/prayer/room/tangi/tangi1-22",            //练武场
        "south":"/open/prayer/room/tangi/tangi1-32",            //练武场
        "west":"/open/prayer/room/tangi/tangi1-26",             //练武场
         
        ]) );
                set("no_fight", 0);
                set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/trainee2" : 2,              //弟子
                
]));
     
  setup();
}
