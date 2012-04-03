//open/prayer/room/3elder1

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "戒律长老房");
  set ("long", @LONG

	    你眼前的那位正是，圣火教总舵三位护教长
	老之一的戒律长老，在这大厅的正中央，长老正
	在与一位男子把酒言欢哩．

LONG);

  set("objects", ([ /* sizeof() == 2 */
  "/open/prayer/npc/behavior-elder" : 1,		//戒律长老
  "/open/prayer/npc/man3" : 1,  
]));
  set("exits", ([ /* sizeof() ==  1*/
	"west" : "/open/prayer/room/3elder3",		//`长老房
]));
  set("light_up", 1);
  set("valid_startroom", 2);

  setup();
}
 
