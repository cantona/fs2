//open/prayer/room/garden15.c
#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","花园");
        set("long",@LONG

不知道从那里来的浓雾,只见阴气沉沉,四周不时传来野兽的叫声........... 

LONG);
        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 4 */
        "north":"/open/prayer/room/garden19",		//花园
        "south":"/open/prayer/room/garden11",		//花园
        "east":"/open/prayer/room/garden14",		// "
        "west":"/open/prayer/room/garden16",			// "
        ]) );
   setup();
}
