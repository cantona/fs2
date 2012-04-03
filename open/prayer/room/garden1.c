//open/prayer/room/garden1.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","花园入口");
        set("long",@LONG

	    总坛的花园，外面是一个木制的栅栏，你
	可以打开它 (open door)，走进去花园里面瞧
	瞧，听说里面养有很多珍奇的野兽......不过
	你最好有心理准备!!因为怪物是不会跟你客气
	的.

LONG);
        set("item_desc", ([ /* sizeof() == 1 */
      "north" : (: look_door,     "north" :),
]));

        set("outdoors", "/open/prayer/room");
        set("exits", ([ /* sizeof() == 2 */
        "north":"/open/prayer/room/garden3",		//花园
        "east":"/open/prayer/room/train1-4",     //走廊
 
        ]) );
        
        set("objects",([ /* sizeof() == 0 */
  "/open/prayer/npc/dog" : 2,		//火犬
   		
]));
        create_door("north","木制栅栏", "south",DOOR_CLOSED);
  setup();
}
