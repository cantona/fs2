//open/prayer/room/tangi/tangi1-33.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","走廊");
        set("long",@LONG

	天机门的走廊的尽头. 由窗外望去可以看见一座很大的
	池塘, 不过池塘中没有任何的生物......有位男子在此
	地等待他朋友来喝酒!!

LONG);

        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 1 */
        "north":"/open/prayer/room/tangi/tangi1-28",		//走廊
       
        ]) );
        set("objects",([ /* sizeof() == 1 */
	"/open/prayer/npc/man6" : 1,		
	]));
     
  setup();
}
