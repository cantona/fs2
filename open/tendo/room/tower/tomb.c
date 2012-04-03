inherit ROOM;
#include <ansi.h>
void create()
{
	set("short", "葬剑亭");
	set("long", @LONG
你现在来到一个山腰靠近山顶的亭子，亭子前立着一个两丈多高的
石碑，从亭子里远眺北方连绵不尽的大山，使你不禁感到胸臆之间一股
英雄情怀油然而生，葬剑亭据说每到夏日夜晚，野风吹过，会产生一阵
阵呜呜的哭泣声。
LONG
	);
	
                          
	set("exits", ([ /* sizeof() == 1 */
  "east" : "/open/tendo/room/tower/water",
  "south" : "/open/tendo/room/tower/tree3",
  "up" : "/open/tendo/room/tower/make1",
]));
	set("no_clean_up", 0);
        set("outdoors",1);
	setup();
}


