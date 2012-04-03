//open/prayer/room/westarea/road16.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","街道");
        set("long",@LONG
	西武林自成一格的街道, 四通八达, 处处繁华. 东边是进入圣
	火教分部之一的"天权门", 天权门的门主是位赤面书生, 使得
	一手好棍法, 可是真实的长相到底是如何就没人得知了......
LONG);

        set("outdoors", "/open/prayer");
        set("exits", ([ /* sizeof() == 3 */
        "north":__DIR__"road11",		//街道
	"south":__DIR__"road19",		//街道
	"east":"/open/prayer/room/tanchun/2-door",		//街道
	
        ]) );
        
        set("no_fight", 0);
        
  setup();
}
