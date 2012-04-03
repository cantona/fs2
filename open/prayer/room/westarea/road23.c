//open/prayer/room/westarea/road23.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","街道");
        set("long",@LONG
	这里是西域西边的三叉路口. 北边是往天璇门, 南边是往玉
	衡门. 传闻西边的曼丽山以前也有个洞窟, 不过现在好像是
	进不去了...........
LONG);

        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 3 */
        "north":__DIR__"road18",	//街道
	"south":__DIR__"road26",	//街道
	"east":__DIR__"road22",		//街道
 
        ]) );
        set("no_fight", 0);
        
  setup();
}
