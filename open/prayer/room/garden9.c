//open/prayer/room/garden9.c
#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","花园");
        set("long",@LONG

	圣火教总坛的花园,走到此处忽然惊觉四处邪气阵阵,烟雾迷漫...... 

LONG);
        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 3 */
        "north":"/open/prayer/room/garden13",		//花园
        "south":"/open/prayer/room/garden5",			// "
        "east":"/open/prayer/room/garden8",			// "
        ]) );
  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/gardener" : 1,
        ]) );
   setup();
}
