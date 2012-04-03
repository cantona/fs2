//open/prayer/room/tangi/tangi1-25.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","练武场");
        set("long",
"天机门的练武场,练武场上的弟子正在练功. 传闻圣火教的武学共有三套,其中之一的
先天乾坤功,威力无俦!!不过却是需要不断的练习!!\n");

        	set("outdoors", "/u/r/rence");
        	set("exits", ([ /* sizeof() == 3 */
        	"north":"/open/prayer/room/tangi/tangi1-20",		//练武场
	"south":"/open/prayer/room/tangi/tangi1-30",		//练武场
	"east":"/open/prayer/room/tangi/tangi1-26",		//练武场
         
        ]) );
        	set("no_fight", 0);
        	set("objects",([ /* sizeof() == 3 */
  "/open/prayer/npc/trainee1" : 1,		//弟子
  "/open/prayer/npc/trainee2" : 1,		//弟子
  "/open/prayer/npc/trainee3" : 1,		//弟子
   		
]));
     
  setup();
}
