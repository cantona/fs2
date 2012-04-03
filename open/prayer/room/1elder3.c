//open/prayer/room/1elder3

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "传功长老房");
  set ("long", @LONG

	    往东走就到了传功长老的大厅了，在门口
	正有一位弟子在勤练武功，看他练得虎虎生风
	，想必是传功长老所传授的弟子了．

LONG);
  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/trainee3" : 1,		//弟子
]));
  set("exits", ([ /* sizeof() ==  4*/
	"west" : "/open/prayer/room/1elder6",		//`长老房
	"north" : "/open/prayer/room/1elder2",		//`长老房
	"south" : "/open/prayer/room/1elder4",		//`长老房
	"east" : "/open/prayer/room/1elder1",		//`长老房
]));
 set("light_up", 1);

  setup();
}
 
