//open/prayer/room/3elder2

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "戒律长老房");
  set ("long", @LONG

	    这里就是戒律长老的办公室了，但是没看
	到长老的人，在书柜上摆着不少的书，想必那
	书上记载着有关教规的资料．

LONG);
  set("exits", ([ /* sizeof() ==  2*/
	"south" : "/open/prayer/room/3elder3",		//`长老房
	"west" : "/open/prayer/room/3elder5",		//`长老房
]));
  set("light_up", 1);

  setup();
}
 
