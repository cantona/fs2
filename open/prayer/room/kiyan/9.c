//open/prayer/room/kiyan/9.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","副门主房");
        set("long",@LONG

	开阳门副门主的办公房，西边是往走廊的方向，西南边
	是副门主的书房. 

LONG);

        set("exits", ([ /* sizeof() == 3 */
        "northwest":__DIR__"10",		//副门主室
	"southwest":__DIR__"12",		//副门主室
	"west":__DIR__"11",		
 
        ]) );
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/trainee4" : 1,		//弟子
   		
]));
     
  setup();
}
