//open/prayer/room/punch1-13

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "总坛大听");
  set ("long", @LONG

    你一进到圣火教总坛的大厅，突然有一种眼前一亮的感觉，原来正如
圣火之名，在这大厅的四周有着无数的火把，并在大厅的中心有一座圣火
座，难怪会如此光亮． 

LONG);
  set("exits", ([ /* sizeof() == 4 */
	"north" : "/open/prayer/room/punch1-10",	//`大厅
	"east" : "/open/prayer/room/punch1-12",		//`大厅
	"west" : "/open/prayer/room/punch1-14",		//`大厅
	"out" : "/open/prayer/room/1-door",	//`大门
]));
  set("light_up", 1);

  setup();
}
 
