// Room: /open/capital/room/r69.c
#include "../../open.h"
inherit ROOM;

void create ()
{
   set("short","军机处");
  set ("long", @LONG
这里是全国最高的军事机构，在这里，兵部尚书掌理全国兵马，包
括军队的调配、差遣、训练等等，充分的显示其权力之大。
 
LONG);

  set("exits", ([ /* sizeof() == 1 */
	"east":"/open/capital/room/r72",
]));

  set("objects", ([ /* sizeof() == 1 */
	"/open/capital/npc/soldier_officer":1,
	]));

  set("no_fight", 1);

  set("light_up", 1);

  set("no_magic", 1);

  setup();
}
