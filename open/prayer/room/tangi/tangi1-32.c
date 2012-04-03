//open/prayer/room/tangi/tangi1-32.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","练武场");
        set("long",
"天机门的练武场,练武场上的弟子正在训练腿力. 传闻圣火教的武学共有三套,第三便
是乾坤大挪移的步法,是教主在东土所悟得的武学!!能够巧妙的避开敌人的攻击!!\n");

        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 2 */
        "north":"/open/prayer/room/tangi/tangi1-27",		//练武场
	"west":"/open/prayer/room/tangi/tangi1-31",		//练武场
       
        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 2 */
  "/open/prayer/npc/trainee2" : 1,		//弟子
  "/open/prayer/npc/trainee3" : 1,		//弟子
   		
]));
     
  setup();
}
