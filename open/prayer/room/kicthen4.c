//open/prayer/room/kitchen4

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "厨房");
  set ("long", @LONG

	    数十名的厨师正在为圣火教的教徒门，准
	备着美味可口的大餐，看来圣火教的教徒门又
	有口褔了．

LONG);
  set("exits", ([ /* sizeof() ==  2*/
	"north" : "/open/prayer/room/kicthen7",		//`厨房
	"west" : "/open/prayer/room/kicthen3",		//`厨房
]));
   set("light_up", 1);

  setup();
}
 
