//open/prayer/room/westarea/road32.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","街道");
        set("long",@LONG
	西武林自成一格的街道, 四通八达, 处处繁华. 东边是进入圣
	火教分部之一的"阵势门", 门主是圣火教军师的得意门生, 人
	称智慧之星, 既有权势, 又得天独厚有了军师直属的部门, 这
	一切的一切恐怕只有教主才知道为什么了吧!!
LONG);

        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 2 */
       	"north":__DIR__"road27",		//街道
	"south":__DIR__"road35",		//街道
        "east":"/open/prayer/room/zhenche/2-door",
        ]) );
        
        set("no_fight", 0);
        
  setup();
}
