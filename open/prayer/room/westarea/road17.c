//open/prayer/room/westarea/road17.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","街道");
        set("long",@LONG
	西武林自成一格的街道, 四通八达, 处处繁华, 北边可以通往
	圣火教的总坛. 圣火教的教主是谜一般的人物, 不过听说他的
	悟性奇高, 并且文学深厚, 所以他自创了圣火教目前所拥有的
	三大绝学.........
LONG);

       	set("outdoors", "/open/prayer");
       	set("no_fight", 0);
	set("exits", ([ /* sizeof() == 2 */
       	"north":__DIR__"road13",		//街道
	"south":__DIR__"road21",		//街道
	 
        ]) );
        setup();
}
