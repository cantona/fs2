//open/prayer/room/horse4

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "马房");
  set ("long", @LONG

	    你来到了圣火八门，门主专属的马匹集中
	所了，匹匹精壮的骏马，显示出圣火教的阶级
	及层次的划分，有多注重了．

LONG);
  set("outdoors", "/open/prayer/room");
  set("exits", ([ /* sizeof() ==  2*/
	"north" : "/open/prayer/room/horse3",		//`马房
	"west" : "/open/prayer/room/horse7",		//`马房
]));

  setup();
}
 
