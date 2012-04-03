//open/prayer/room/westarea/1.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","攀霞岭");
        set("long",@LONG

	曼丽山上的一座小山岭, 眼前所见是一些简朴的茅
	屋, 还有些牲畜在四处乱飞乱跑!!霞云满布, 好一
	股世外桃源之气息!!北边有白色的炊烟, 嗯!!去看
	一看也好!!

LONG);
        set("exits", ([ /* sizeof() == 2 */
        "north":__DIR__"2",	
        "south":__DIR__"highroom",	
 
        ]) );
        set("light_up", 1);
        set("no_transmit",1);
//        set("objects",([ /* sizeof() == 1 */
//  "/open/prayer/npc/high-man" : 1,		
//]));
  setup();
}
