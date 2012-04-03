//open/prayer/room/train1-5

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "走廊");
  set ("long", @LONG

	    在东边有一扇门，这里正是通往传功房的
	唯一入口，北方可以通往马房，而南方正是接
	往戒律厅的通路．

LONG);
  set("exits", ([ /* sizeof() == 3 */
	"south" : "/open/prayer/room/train1-10",		//`走廊
	"north" : "/open/prayer/room/train1-2",		//`走廊
	"enter" : "/open/prayer/room/1elder6",		//`长老房
]));

  setup();
}
 
