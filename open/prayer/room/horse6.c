//open/prayer/room/horse6

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "马房");
  set ("long", @LONG

	    仔细一看四周，你才发现你己来到圣火教
	的马房了，四处传来阵阵的马啼声，想必教里
	所拥有的马匹数量一定不少．

LONG);
  set("outdoors", "/open/prayer/room");
  set("exits", ([ /* sizeof() ==  4*/
	"out" : "/open/prayer/room/train1-2",		//`走廊
	"north" : "/open/prayer/room/horse5",		//`马房
	"south" : "/open/prayer/room/horse7",		//`马房
	"east" : "/open/prayer/room/horse3",		//`马房
]));

  setup();
}
 
