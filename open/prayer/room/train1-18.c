//open/prayer/room/train1-18

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "练武场");
  set ("long", @LONG

	    圣火教总坛的练武场上，你看到许多圣火
	弟子拼命的勤练武功．而眼前这个圣火弟子看
	来武功底子不弱． 

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/trainee4" : 3,
]));
  set("outdoors", "/open/prayer/room");
  set("exits", ([ /* sizeof() == 2 */
	"north" : "/open/prayer/room/train1-13",		//`练武场
	"east" : "/open/prayer/room/train1-17",		//`练武场
]));

  setup();
}
 
