//open/prayer/room/1elder4

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "传功长老房");
  set ("long", @LONG

	    这里就是传功长老的办公室了，但是没看
	到长老的人，该不是又在练武场指导弟子门的
	功夫了．

LONG);

  set("exits", ([ /* sizeof() ==  2*/
	"north" : "/open/prayer/room/1elder3",		//`长老房
	"west" : "/open/prayer/room/1elder7",		//`长老房
])); 
 set("light_up", 1);

  setup();
}
 
