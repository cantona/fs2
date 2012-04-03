//open/prayer/room/punch1-14

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "总坛大听");
  set ("long", @LONG

    在房间的角落，有一支五人环抱的盘龙大柱，这支大柱不但粗而且高
，看来圣火教的总坛的兴建，一定是个浩浩荡荡的大工程，才会给人有种
气势磅礴的感觉． 

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/major-officer" : 1,		//弟子
]));
  set("exits", ([ /* sizeof() == 2 */
	"north" : "/open/prayer/room/punch1-11",	//`大厅
	"east" : "/open/prayer/room/punch1-13",		//`大厅

]));
  set("light_up", 1);

  setup();
}
 
