//open/prayer/room/garden12.c
#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","花园");
        set("long",@LONG

	    突然有阵阵的香味传来，原来是南方进去
	    圣火教总坛的花园，里面的树木都长的奇
	形怪状的，真是令人丈二金刚摸不着头脑!!走
	到此处你忽然惊觉四处邪气阵阵，整个人的毛
	孔都有点竖立起来了........... 

LONG);
        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 4 */
        "north":"/open/prayer/room/garden16",		//花园
        "south":"/open/prayer/room/garden8",		//花园
        "east":"/open/prayer/room/garden11",		// "
        "west":"/open/prayer/room/garden13",			// "
        ]) );
        set("objects", ([ /* sizeof() == 1 */
        "/open/prayer/npc/lion" :1,		
        ]) );
   setup();
}
