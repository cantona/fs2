//open/prayer/room/tanchun/17.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","练武场");
        set("long",@LONG

	练武场上的弟子一个个都在磨练自己的体能，只希望能够早一天
	具备修习圣火教绝学的资格!!瞧他们努力的样子, 自己都开始有
	点想要加入圣火教了.

LONG);

        set("outdoors", "/open/prayer");
        set("exits", ([ /* sizeof() == 3 */
        "east":__DIR__"16",		
	"south":__DIR__"21",		//练武场
	"west":__DIR__"18",	
 
        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 2 */
  "/open/prayer/npc/trainee1" : 1,		//弟子
  "/open/prayer/npc/trainee4" : 1,		//弟子
   		
]));
     
  setup();
}
