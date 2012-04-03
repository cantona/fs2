//open/prayer/room/2elder3

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "执法长老房");
  set ("long", @LONG

	    从西边的大门进去就到了执法长老的大厅
	了，在门口有二位弟子正奉命把守大门，看来
	执法厅又在执行教规了．

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/trainee3" :2,		//弟子
]));
  set("exits", ([ /* sizeof() ==  4*/
	"east" : "/open/prayer/room/2elder6",		//`长老房
	"north" : "/open/prayer/room/2elder2",		//`长老房
	"south" : "/open/prayer/room/2elder4",		//`长老房
	"west" : "/open/prayer/room/2elder1",		//`长老房
]));
  set("light_up", 1);
  setup();
}
 
