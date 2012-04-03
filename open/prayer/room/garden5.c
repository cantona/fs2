//open/prayer/room/garden5.c
#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","花园");
        set("long",@LONG

	    这个花园颇大，往东往北都是浓浓的雾气
	，整座花园弥漫着一种说不出的诡异气氛，时
	时有听到野兽咆哮的声音，时而闻到浓厚的血
	腥味道，令你不寒而颤。哇哇!!这里有只怪物
	呀!!

LONG);
        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 2 */
        "north":"/open/prayer/room/garden9",		//花园
        "east":"/open/prayer/room/garden4",			// "
        ]) );
  set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/bird" : 1,
        ]) );
   setup();
}
