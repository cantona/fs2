//open/prayer/room/train1-13

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "练武场");
  set ("long", @LONG

	    在二十公尺处，有三个圣火弟子在圣火教
	总坛的练武场，演练着圣火阵法，真没想到，
	圣火教竟然还会阵法．

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/trainee2" : 3,		//弟子
]));
  set("outdoors", "/open/prayer/room");
  set("exits", ([ /* sizeof() == 3 */
	"south" : "/open/prayer/room/train1-18",		//练武场
	"north" : "/open/prayer/room/train1-8",		//`练武场
	"east" : "/open/prayer/room/train1-12",		//`练武场
]));

  setup();
}
 
