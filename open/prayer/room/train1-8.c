//open/prayer/room/train1-8

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "练武场");
  set ("long", @LONG

	    前方十公尺处有两个圣火弟子，正在圣火
	教总坛的练武场，相互的套招，仔细一看原来
	是在打混摸鱼．

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/trainee2" : 2,		//弟子
]));
  set("outdoors", "/open/prayer/room");
  set("exits", ([ /* sizeof() == 3 */
	"south" : "/open/prayer/room/train1-13",		//练武场
	"north" : "/open/prayer/room/train1-3",		//`走廊
	"east" : "/open/prayer/room/train1-7",		//`练武场
]));

  setup();
}
 
