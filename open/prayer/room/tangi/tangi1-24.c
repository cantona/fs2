//open/prayer/room/tangi/tangi1-24.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","走廊");
        set("long",
"走廊的尽头是天机门的厨房，往北则可以到达大厅，西边是总管的处理门务的
地方.\n");

        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 3 */
        "north":"/open/prayer/room/tangi/tangi1-19",		//走廊
	"south":"/open/prayer/room/tangi/tangi1-29",		//走廊
	"west":"/open/prayer/room/tangi/tangi1-44",		//总管办公室
       
        ]) );

  setup();
}
 int valid_leave(object me, string dir)
  {
    if(dir=="west"&&me->query("gender")=="男性")
        return notify_fail("男人是无法进入总管的办公房的 ?\n");
        
   return 1;
}
