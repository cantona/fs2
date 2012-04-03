//open/prayer/room/westarea/road15.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","街道");
        set("long",@LONG
	西武林自成一格的街道, 四通八达, 处处繁华. 北边是往天机
	门, 南边是往天璇门. 圣火教的令牌一共有六只, 也就是俗称
	的[圣火令]. 每只的长短不一, 不过上面好像都刻有武学的心
	法.....
LONG);

        set("outdoors", "/open/prayer");
        set("exits", ([ /* sizeof() == 3 */
       	"north":__DIR__"road10",	//街道
	"south":__DIR__"road18",	//街道
	"east":__DIR__"road14",		//街道
 
        ]) );
        set("no_fight", 0);
        
  setup();
}
