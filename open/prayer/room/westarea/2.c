//open/prayer/room/westarea/2.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","攀霞岭");
        set("long",@LONG

	曼丽山上的一座小山岭, 眼前所见是一些简朴的茅
	屋, 还有些牲畜在四处乱飞乱跑!!霞云满布, 好一
	股世外桃源之气息!!两侧分别有一位男子在练功,
	北边则是一位脸带笑容的老者!!

LONG);
        set("exits", ([ /* sizeof() == 4 */
        "north":__DIR__"5",	
        "south":__DIR__"1",	
        "east":__DIR__"4",	
        "west":__DIR__"3",	
 
        ]) );
        set("light_up", 1);
        set("no_transmit",1);
//        set("objects",([ /* sizeof() == 1 */
//  "/open/prayer/npc/high-man" : 1,		
//]));
  setup();
}
