//open/prayer/room/train1-3

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "走廊");
  set ("long", @LONG

	    这里是圣火教的大走廊，连接着圣火教的
	执法堂．传功房．戒律厅等三大厅，以及圣火
	教的伙房．

LONG);
  set("exits", ([ /* sizeof() == 3 */
     "south" : "/open/prayer/room/train1-8",         //`练武场
	"west" : "/open/prayer/room/train1-4",		//`走廊
	"east" : "/open/prayer/room/train1",		//`练武场
]));

  setup();
}
 
