//open/prayer/room/2elder5

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "执法长老房");
  set ("long", @LONG

	    在前面不远处正有一位弟子在勤练武功，
	看他练得虎虎生风，看来执法长老的武功不会
	在传功长老之下．

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/trainee1" : 1,		//弟子
]));
  set("exits", ([ /* sizeof() ==  2*/
	"south" : "/open/prayer/room/2elder6",		//`长老房
	"west" : "/open/prayer/room/2elder2",		//`长老房
]));
  set("light_up", 1);
  setup();
}
 
