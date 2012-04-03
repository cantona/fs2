//open/prayer/room/westarea/highroom.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","攀霞岭");
        set("long",@LONG

	曼丽山上的一座小山岭, 眼前所见是一些简朴的茅
	屋, 还有些牲畜在四处乱飞乱跑!!霞云满布, 好一
	股世外桃源之气息!!往下走是下山的方向, 来到这
	里难道就这样下山去了??

LONG);
        set("exits", ([ /* sizeof() == 2 */
        "north":__DIR__"1",	
        "down":__DIR__"road23",
 
        ]) );
        set("light_up", 1);
        set("no_transmit",1);
//        set("objects",([ /* sizeof() == 1 */
//  "/open/prayer/npc/high-man" : 1,		
//]));
  setup();
}
