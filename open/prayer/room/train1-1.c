//open/prayer/room/train1-1

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "走廊");
  set ("long", @LONG

	    这里是圣火教的大走廊，连接着圣火教的
	三大厅，有一个拳师正朝着你冲冲走来，好像
	发生了什么事一般．

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/puncher1" : 1,		
]));
  set("exits", ([ /* sizeof() == 2 */
//	"south" : "/open/prayer/room/train1-6",		//练武场
	"east" : "/open/prayer/room/train1-2",		//`走廊
	"west" : "/open/prayer/room/train1",		//`练武场
]));

  setup();
}
 
