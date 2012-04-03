//open/prayer/room/kiyan/11.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","副门主房");
        set("long",@LONG

	开阳门副门主的办公房. 门内的摆设除了几张桌椅之外, 也没有什
	么东西了..房内有许多的教内弟子在站岗, 可见副门主的地位也是
	非常的重要与高阶了!!南边是副门主的书桌!!

LONG);
        set("exits", ([ /* sizeof() == 4 */
        "north":__DIR__"10",		//副门主室
	"south":__DIR__"12",		//副门主室
	"west":__DIR__"13",		//走廊
        "east":__DIR__"9",		//副门主室
 
        ]) );
        set("light_up", 1);
        set("objects",([ /* sizeof() == 2 */
   "/open/prayer/npc/trainee1" : 1,		//弟子
   "/open/prayer/npc/trainee3" : 1,		//弟子
   		
]));
     
  setup();
}
