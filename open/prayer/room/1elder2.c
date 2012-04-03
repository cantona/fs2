//open/prayer/room/1elder2

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "传功长老房");
  set ("long", @LONG

	    这里有一个小凉亭，在凉亭的四周，丛花
	盛开，鸟语阵阵，使人有一种想在凉亭内休息
	片刻的想法．

LONG);
  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/trainee1" : 1,		//弟子
]));

  set("exits", ([ /* sizeof() ==  2*/
	"south" : "/open/prayer/room/1elder3",		//`长老房
	"west" : "/open/prayer/room/1elder5",		//`长老房
]));
 set("light_up", 1);

  setup();
}
 
