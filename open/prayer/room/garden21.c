//open/prayer/room/garden21.c
#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","花园");
        set("long",@LONG

	    整座花园的奇兽得确是非常的怪异，可是
	教主到底是如何抓到这里来的呢??难道这里面
	有什么对外的密道不成??

LONG);
        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 2 */
        "south":"/open/prayer/room/garden17",		//花园
        "east":"/open/prayer/room/garden20",		// "
        ]) );

   setup();
}
