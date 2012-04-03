//open/prayer/room/westarea/road29.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","街道");
        set("long",@LONG
	十字路口. 同时也是圣火教的南北快速道路. 往北边走可以
	到达圣火教的总坛. 往南则是通往中原武林的要道. 四方到
	处可见圣火教的各个支门..西边有一家钱庄, 你可以在那里
	存放银两!!
LONG);

        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 4 */
       	"north":__DIR__"road25",	//街道
	"south":__DIR__"road33",	//街道
	"east":__DIR__"road28",		//街道
	"west":__DIR__"road30",		//街道

        ]) );
        set("no_fight", 0);
        
  setup();
}
