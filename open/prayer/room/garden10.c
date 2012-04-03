//open/prayer/room/garden10.c
#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","花园");
        set("long",@LONG

	    血红色的浓雾飘，闻起来有股腥味!!令人
	的意识渐渐模糊......在不远的地方时而传来
	类似魔物的咆哮声，看来你最好还是收起探险
	的心情吧!! 

LONG);
        set("outdoors", "/open/prayer/room");
        set("exits", ([ /* sizeof() == 3 */
        "north":"/open/prayer/room/garden14",		//花园
        "south":"/open/prayer/room/garden6",			// "
        "west":"/open/prayer/room/garden11",			// "
        ]) );
  set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/crab-ox" : 1,
        ]) );
   setup();
}
