//open/prayer/room/garden2.c
#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","花园");
        set("long",@LONG

	    浓厚的血腥味扑鼻而来，但你不以为意，
	在这江湖上行走，早就过惯刀口上过活的日子
	，地上足迹非常明显，这是人血还是怪兽的血
	呢??管它的，只要不是自己的血就好了!!

LONG);
        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 2 */
        "north":"/open/prayer/room/garden6",		//花园
        "west":"/open/prayer/room/garden3",		// "
        ]) );
   setup();
}
