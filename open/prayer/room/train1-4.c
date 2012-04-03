//open/prayer/room/train1-4

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "走廊");
  set ("long", @LONG

	    前方正有一坐拱门，拱门的后方就是圣火
	教的御花园，花园里面种着许多的奇花异木，
	听说也有珍禽猛兽的出没．

LONG);
  set("exits", ([ /* sizeof() == 3 */
	"south" : "/open/prayer/room/train1-9",		//`走廊
	"west" : "/open/prayer/room/garden1",		//`花园
	"east" : "/open/prayer/room/train1-3",		//`走廊
]));
	
  setup();
}
 
