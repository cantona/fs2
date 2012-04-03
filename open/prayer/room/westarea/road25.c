//open/prayer/room/westarea/road25.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","街道");
        set("long",@LONG
	这一整条南北向的道路, 四通八达, 是圣火教的专用公路, 北
	边可以通往圣火教的总坛. 南边则是通往中原武林的要道.
LONG);

       	set("outdoors", "/u/r/rence");
       	set("no_fight", 0);
	set("exits", ([ /* sizeof() == 2 */
       	"north":__DIR__"road21",		//街道
	"south":__DIR__"road29",		//街道
	 
        ]) );
        set("objects",([ /* sizeof() ==  1*/
	"/open/prayer/npc/woman1" : 1,		
        ]) );
        setup();
}
