//open/prayer/room/tanchun/11.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","副门主房");
        set("long",@LONG

	天权门副门主的办公房. 负责护卫工作的弟子众多, 守备森严, 
	他们除了保护副门主的安全之外, 也代表了圣火教对高级干部的
	一种尊重.

LONG);

        set("exits", ([ /* sizeof() == 2 */
        "south":__DIR__"12",		//副门主室
	"southeast":__DIR__"10",		
 
        ]) );
        set("light_up", 1);
        set("objects",([ /* sizeof() == 2 */
   "/open/prayer/npc/trainee2" : 1,		//弟子
   "/open/prayer/npc/trainee3" : 1,		//弟子
   		
]));
     
  setup();
}
