//open/prayer/room/tangi/tangi1-1.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","门主的书房");
        set("long",@LONG

	此处是天机门门主所属的书房，只见四周的书柜都装满了诗
	集与文物卷轴，可见得门主司马锦对于文学的品嚐是非常重
	视的．同时这里也是天机门门生的秘密聚会之地!!非圣火教
	者是不能进入的!! 

LONG);
        set("exits", ([ /* sizeof() == 1 */
        "south":"/open/prayer/room/tangi/tangi1",		//门主
        ]) );
        set("no_fight", 0);
        set("light_up", 1);

   setup();
}



