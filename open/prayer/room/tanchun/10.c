//open/prayer/room/tanchun/10.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","副门主房");
        set("long",@LONG

	天权门副门主的办公房. 西边是往走廊的方向, 这里的弟子是副
	门主的随从. 一个副门主就有如此多的随从, 由此可见圣火教对
	于高级的干部是有多么的重视了. 

LONG);

        set("exits", ([ /* sizeof() == 3 */
        "northwest":__DIR__"11",		//副门主室
	"southwest":__DIR__"13",		//副门主室
	"west":__DIR__"12",		
 
        ]) );
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/trainee4" : 1,		//弟子
   		
]));
     
  setup();
}
