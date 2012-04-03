//open/prayer/room/tanchun/20.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","练武场");
        set("long",@LONG

	天权门的练武场, 练武场上的弟子正在训练腿力. 传闻圣火教的
	乾坤大挪移的步法, 能够巧妙的避开敌人的攻击!!并且可以出其
	不意地制敌于先机!!

LONG);

        set("outdoors", "/open/prayer");
        set("exits", ([ /* sizeof() == 4 */
        "north":__DIR__"16",		//练武场
	"south":__DIR__"26",		//练武场
	"west":__DIR__"21",		//练武场
	"east":__DIR__"19",		//练武场
 
        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 2 */
  "/open/prayer/npc/trainee3" : 1,		//弟子
  "/open/prayer/npc/trainee4" : 1,		//弟子
   		
]));
     
  setup();
}
