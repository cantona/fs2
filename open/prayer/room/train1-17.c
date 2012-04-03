//open/prayer/room/train1-17

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "总坛练武场");
  set ("long", @LONG

	    你一入目的是一个非常壮观的画面，因为
	你放眼过去在圣火教总坛的练武场，有着许多
	圣火弟子拼命的勤练武功．看来圣火教真有实
	力遂鹿中原武林． 

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/trainee3" : 3,
]));
  set("outdoors", "/open/prayer/room");
  set("exits", ([ /* sizeof() == 4 */
	"north" : "/open/prayer/room/train1-12",		//`练武场
	"out" : "/open/prayer/room/1-door2",		//`大门
	"east" : "/open/prayer/room/train1-16",		//`练武场
	"west" : "/open/prayer/room/train1-18",		//`练武场
]));

  setup();
}
 
