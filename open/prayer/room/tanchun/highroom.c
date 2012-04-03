//open/prayer/room/tanchun/highroom.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","攀霞岭");
        set("long",@LONG

	曼丽山上的一座小山岭, 眼前所见是一些简朴的茅
	屋, 还有些牲畜在四处乱飞乱跑!!霞云满布, 好一
	股世外桃源之气息!!

LONG);
        set("exits", ([ /* sizeof() == 1 */
        "down":"/open/prayer/room/westarea/road23",	
 
        ]) );
        set("light_up", 1);
        set("no_transmit",1);
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/high-man" : 1,		
]));
  setup();
}
