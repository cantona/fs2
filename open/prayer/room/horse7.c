//open/prayer/room/horse7

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "马房");
  set ("long", @LONG

	    只是一间堆放杂物的房间，在这间仓库有
	许许多多骑马的基本装备，及饲养马匹所须的
	一些工具．

LONG);
  set("outdoors", "/open/prayer/room");
  set("exits", ([ /* sizeof() ==  2*/
	"north" : "/open/prayer/room/horse6",		//`马房
	"east" : "/open/prayer/room/horse4",		//`马房
]));

  setup();
}
 
