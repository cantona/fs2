//open/prayer/room/horse3

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "马房");
  set ("long", @LONG

	    眼前有着许许多多的马匹，虽然这些马匹
	在圣火教中，是属于最低层次的，这些马匹都
	经过严格驯练过的．

LONG);
  set("outdoors", "/open/prayer/room");
  set("exits", ([ /* sizeof() ==  4*/
	"west" : "/open/prayer/room/horse6",		//`马房
	"north" : "/open/prayer/room/horse2",		//`马房
	"south" : "/open/prayer/room/horse4",		//`马房
	"east" : "/open/prayer/room/horse1",		//`马房
]));

  setup();
}
 
