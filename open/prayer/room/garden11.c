//open/prayer/room/garden11.c
#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","花园");
        set("long",@LONG

	    这个花园颇大，往东往西往南往北都是浓
	浓的雾气，整座花园弥漫着一种说不出的诡异
	气氛，时有听到野兽咆哮的声音，时而闻到浓
	厚的血腥味道令你不寒而颤。

LONG);
        set("outdoors", "/u/r/rence");
	set("objects", ([ /* sizeof() == 1 */
	"/open/prayer/npc/maker" : 1,  
	]));
        set("exits", ([ /* sizeof() == 4 */
        "north":"/open/prayer/room/garden15",		//花园
        "south":"/open/prayer/room/garden7",		//花园
        "east":"/open/prayer/room/garden10",		// "
        "west":"/open/prayer/room/garden12",		// "
        ]) );
   setup();
}
