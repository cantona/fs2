//open/prayer/room/1elder7

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "传功长老房");
  set ("long", @LONG

	    这里有一个圣火弟子正在蹲马步，其样子
	看来不是在练功的感觉，莫非是做错什么事而
	被处罚．

LONG);
  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/trainee2" : 1,		//弟子
]));
  set("exits", ([ /* sizeof() ==  2*/
	"north" : "/open/prayer/room/1elder6",		//`长老房
	"east" : "/open/prayer/room/1elder4",		//`长老房
]));
 set("light_up", 1);

  setup();
}
 
