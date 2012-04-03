//open/prayer/room/punch1-12

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "总坛大听");
  set ("long", @LONG

    你吓了一跳!!因为你以为角落有一条巨龙要吃了你，卜一定神一看，
在角落的那条巨龙，原是支撑总坛宫殿的四支盘龙大柱，就因为上的刻工
太栩栩如生了，才会使人产人幻觉． 

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/major-officer" : 1,		//弟子
]));
  set("exits", ([ /* sizeof() == 2 */
	"north" : "/open/prayer/room/punch1-9",		//`大厅
	"west" : "/open/prayer/room/punch1-13",		//`大厅

]));
  set("light_up", 1);

  setup();
}
 
