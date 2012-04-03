//open/prayer/room/westarea/4.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","攀霞岭");
        set("long",@LONG

	曼丽山上的一座小山岭, 眼前所见是一些简朴的茅
	屋, 还有些牲畜在四处乱飞乱跑!!霞云满布, 好一
	股世外桃源之气息!!眼前这位是隐世高人的第二位
	徒弟, 他正在挥舞着手中的鞭子, 看来他的鞭法非
	常地高明呢!!

LONG);
        set("exits", ([ /* sizeof() == 1 */
        "west":__DIR__"2",	
 
        ]) );
        set("light_up", 1);
        set("no_transmit",1);
        set("objects",([ /* sizeof() == 1 */
        "/open/prayer/npc/high-man2" : 1,		
        ]));
  setup();
}
