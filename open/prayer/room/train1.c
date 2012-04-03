//open/prayer/room/train1

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "总坛练武场");
  set ("long", @LONG

	    这里有一个圣火教头，正在操领着弟子们
	子，看来圣火教教主有逐鹿中原，称霸武林的
	念头．

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/general-officer1" : 1,		
]));
  set("exits", ([ /* sizeof() == 4 */
	"north" : "/open/prayer/room/1-door",		//`大门
	"south" : "/open/prayer/room/train1-7",		//`练武场
	"east" : "/open/prayer/room/train1-1",		//`走廊
	"west" : "/open/prayer/room/train1-3",		//`走廊
]));

  setup();
}
 
