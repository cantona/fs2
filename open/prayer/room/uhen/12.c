//__DIR__"12.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","副门主房");
        set("long",@LONG

	玉衡门副门主的办公房.一进来你就看到副门主跟身旁的弟子
        在讨论玉衡门的门下事务.似乎相当的忙录. 看来要当一个副
        门主也是要有相当的才能方可.  

LONG);

        set("exits", ([ /* sizeof() == 2 */
        "north":__DIR__"11",		//副门主室
	"northeast":__DIR__"9",		
 
        ]) );
        set("light_up", 1);
        set("objects",([ /* sizeof() == 2 */
        "/open/prayer/npc/vice-chair" : 1,		
        "/open/prayer/npc/trainee3" : 1,		//弟子
   		
]));
     
  setup();
}
