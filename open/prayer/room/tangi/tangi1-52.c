//open/prayer/room/tangi/tangi1-52.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","副门主的书房");
        set("long",
"天机门副门主的书房,这里是副门主处理门务的地方. 副门主是武学的领导者,虽然
武学造诣不及门主的一半,可是细心与耐心是让门主交予重任的原因!!\n");

        set("exits", ([ /* sizeof() == 1 */
        "west":"/open/prayer/room/tangi/tangi1-50",		//副门主房
       
        ]) );
        set("light_up", 0);
        set("objects",([ /* sizeof() == 2 */
  "/open/prayer/npc/vice-chair" : 1,		//副门主
  "/open/prayer/npc/puncher" : 1,		//拳师
   		
]));
     
  setup();
}
