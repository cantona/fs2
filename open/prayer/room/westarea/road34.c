//open/prayer/room/westarea/road34.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","街道");
        set("long",@LONG
	西武林自成一格的街道, 四通八达, 处处繁华, 西边是圣火教麾
	下的分部之一--"瑶光门". 瑶光门内全是女性, 不过听说曾经有
	过一位男性进入, 之后便再也没有人看见他了............  
LONG);

       	set("outdoors", "/u/r/rence");
       	set("no_fight", 0);
	set("exits", ([ /* sizeof() == 2 */
       	"north":__DIR__"road31",		//街道
	"south":__DIR__"road39",		//街道
	"west":"/open/prayer/room/youkoun/2-door",		//大门
 
        ]) );
    setup();
}
