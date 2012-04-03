//open/prayer/room/tanchun/21.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","练武场");
        set("long",@LONG

	练武场上的弟子一个个都在磨练自己的体能，只希望能够早一天
	具备修习先天乾坤功的资格!!而先天乾坤功一共有一十二式, 每 
	一式都有着意想不到的变招, 可是要学得十成的火侯, 就得要先
	天的悟性加上后天的努力了!! 

LONG);

        set("outdoors", "/open/prayer");
        set("exits", ([ /* sizeof() == 3 */
        "north":__DIR__"17",		//练武场
	"south":__DIR__"27",		//练武场
	"east":__DIR__"20",		//练武场
 
        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 2 */
  "/open/prayer/npc/trainee2" : 1,		//弟子
  "/open/prayer/npc/trainee3" : 1,		//弟子
   		
]));
     
  setup();
}
