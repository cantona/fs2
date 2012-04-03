//open/prayer/room/garden3.c
#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","花园");
        set("long",@LONG

	    此处是圣火教总坛的花园，也是收集珍奇
	野兽的地方．虽然教主并没有明令禁止教众进
	来此地，不过为了自身的生命安全，陌生的地
	方还是不要乱闯的好呀!!眼前的这只怪物正张
	牙舞爪的像你撒娇哩!!
 
LONG);
        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 4 */
        "north":"/open/prayer/room/garden7",		//花园
        "south":"/open/prayer/room/garden1",		//  "
        "east":"/open/prayer/room/garden2",		// "
        "west":"/open/prayer/room/garden4",		// "
        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/crab-ox" : 1,		
]));
   create_door("south","木制栅栏","north",DOOR_CLOSED);
   setup();
}
