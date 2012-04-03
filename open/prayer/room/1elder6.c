//open/prayer/room/1elder6

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "传功长老房");
  set ("long", @LONG

	    眼前正有一位弟子，正在练习传功长老所
	教导的武术，只见这位弟子汗流夹背，想必是
	练习有一段时间了．

LONG);
  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/trainee4" : 1,		//弟子
]));
  set("exits", ([ /* sizeof() ==  4*/
	"out" : "/open/prayer/room/train1-5",		//`走廊
	"north" : "/open/prayer/room/1elder5",		//`长老房
	"south" : "/open/prayer/room/1elder7",		//`长老房
	"east" : "/open/prayer/room/1elder3",		//`长老房
]));
 set("light_up", 1);

  setup();
}
 
