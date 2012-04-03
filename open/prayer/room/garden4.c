//open/prayer/room/garden4.c
#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","花园");
        set("long",@LONG

	    不知道从那里来的浓雾，只见阴气沉沉，
	四周不时传来野兽的叫声．远方可以看见一座
	雕像，不过因为浓雾太大了，不能够清楚地分
	辨出来其真面目!! 

LONG);
        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 3 */
        "north":"/open/prayer/room/garden8",		//花园
        "east":"/open/prayer/room/garden3",		// "
        "west":"/open/prayer/room/garden5",		// "
        ]) );
   setup();
}
