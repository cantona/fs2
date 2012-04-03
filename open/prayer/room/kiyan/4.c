//open/prayer/room/kiyan/4.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","开阳门大厅");
        set("long",@LONG

	西武林中一个势力庞大的组织，人们统称她为「圣火教”，又称
	为明教．此处是明教圣火八天门之一的开阳门，门上所坐的是开
	阳门的门主．开阳门是圣火教排行第六的支门．门主后面是她的
	闺房.

LONG);
        set("exits", ([ /* sizeof() == 4 */
        "north":__DIR__"1",	//门主房间
        "south":__DIR__"7",	//大厅
        "east":__DIR__"3",	//右护法
        "west":__DIR__"5",	//左护法
 
        ]) );
        set("light_up", 1);
set("valid_startroom", 1);
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/kiyan" : 1,		//门主
]));
  setup();
}

void init()
{
  add_action("do_pass","pass");
}

int do_pass()
{
   object me=this_player();
   me->move("/open/ping/room/road3");
   return 1;
}
