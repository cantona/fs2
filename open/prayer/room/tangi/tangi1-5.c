//open/prayer/room/tangi/tangi1-5.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","石牢");
        set("long",
"此处是明教分部之一的天机门内部的石牢. 四处血迹斑斑,一定是之前所禁锢的人犯所
遗留下来的.....\n");
        set("exits", ([ /* sizeof() == 1 */
        "south":"/open/prayer/room/tangi/tangi1-6",		//地牢
        ]) );

   setup();
}
