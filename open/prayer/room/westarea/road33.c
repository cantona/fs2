//open/prayer/room/westarea/road33.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","街道");
        set("long",@LONG
	圣火教南北向的快速道路, 北边可以通往圣火教的总坛. 南边
	是往中原武林的道路. 中原武林与西域唯一进出的路线只有这
	个[ 花菶丘陵 ]!!此一丘陵地势呈凹字型, 是一个狭隘的通道
	, 除了西域的板车外, 很难在有其它的交通工具能通行无碍!!
LONG);

       	set("outdoors", "/u/r/rence");
       	set("no_fight", 0);
	set("exits", ([ /* sizeof() == 2 */
        "north":__DIR__"road29",		//街道
	"south":__DIR__"road37",		//街道
	 
        ]) );
          set("objects", ([ /* sizeof() == 1 */
          "/open/prayer/npc/vendor" : 1,
]));

        setup();
}
