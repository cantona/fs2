//open/prayer/room/tanchun/13.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","副门主房");
        set("long",@LONG

	天权门副门主的书房. 副门主看来一副很忙碌的样子, 应该是在
	帮门主处理门下的事务吧!!难怪门主有比较多的时间练武了....

LONG);

        set("exits", ([ /* sizeof() == 2 */
        "north":__DIR__"12",		//副门主室
	"northeast":__DIR__"10",		
 
        ]) );
        set("light_up", 1);
        set("objects",([ /* sizeof() == 2 */
   "/open/prayer/npc/vice-chair" : 1,		
   "/open/prayer/npc/trainee3" : 1,		//弟子
   		
]));
     
  setup();
}
