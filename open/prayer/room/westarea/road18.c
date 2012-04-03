//open/prayer/room/westarea/road18.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","街道");
        set("long",@LONG
	西武林自成一格的街道, 四通八达, 处处繁华, 西边是圣火八
	天门之一--"天璇门". 门主是一位美丽的女性, 是一位中原人
	士, 不过听说已经结婚了!!她的夫婿好像也是圣火教的一位门
	主......
LONG);

        set("outdoors", "/open/prayer");
        set("no_fight", 0);
	set("exits", ([ /* sizeof() == 3 */
        "north":__DIR__"road15",		//街道
	"south":__DIR__"road23",		//街道
	"west":"/open/prayer/room/tanshun/2-door",		//大门
 
        ]) );
        
        setup();
}
