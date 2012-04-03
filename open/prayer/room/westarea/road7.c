//open/prayer/room/westarea/road7.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","街道");
        set("long",@LONG
	西武林自成一格的街道, 四通八达, 处处繁华. 西边是通往飘
	渺四宫的"白虎宫". 舞者的武学好像与圣火教的武学素养相差
	不多, 或许这是造成两派一山不容二虎的原因吧!!
LONG);

        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 1 */
        	"south":__DIR__"road5",		//街道

        ]) );
        set("no_fight", 0);
        
  setup();
}
