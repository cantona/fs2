//open/prayer/room/tangi/tangi1-23.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","走廊");
        set("long",
"天机门的走廊，走廊的支柱同样是以桧木造成的，与廊顶的整体造型非常搭配，
西边是往练武场．南边是往副门主的办公房．\n");

        set("outdoors", "/u/r/rence");
        set("no_fight", 0);
        set("exits", ([ /* sizeof() == 2 */
        "south":"/open/prayer/room/tangi/tangi1-28",		//走廊
        "west":"/open/prayer/room/tangi/tangi1-22",		//走廊
       
        ]) );
     
  setup();
}
