//open/prayer/room/tanchun/12.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","副门主房");
        set("long",@LONG

	天权门副门主的办公房. 西边是往走廊的方向, 南边是往副门主
	的书房. 看这两位站岗的弟子有说有笑的, 相信圣火教一定是一
	个很不错的组织了.

LONG);

        set("exits", ([ /* sizeof() == 4 */
        "north":__DIR__"11",		//副门主室
	"south":__DIR__"13",		//副门主室
	"west":__DIR__"14",		//走廊
        "east":__DIR__"10",		//副门主室
 
        ]) );
        set("light_up", 1);
        set("objects",([ /* sizeof() == 2 */
   "/open/prayer/npc/trainee1" : 1,		//弟子
   "/open/prayer/npc/trainee3" : 1,		//弟子
   		
]));
     
  setup();
}
