//open/prayer/room/punch1 

inherit ROOM;
#include <ansi.h>

void create ()
{
  set ("short", "圣火教总坛");
	set( "build", 7 );
  set("valid_startroom",1);
  set ("long", @LONG

    这正是武林中传说的「圣火教总坛”，你仰头一看上方有一块，用金
底红字的排匾，上头写着[31m‘圣火教’[37m，你望了四周看到的是一个宽畅无比
及魄力十足的宫殿，仅有四支擎天般的盘龙大柱支橕着，且在红地毯的两
端有两个身材魁武的左．右护法，在红地毯的尽头，有个人坐在王座上，
给人一种皇者般的压力，给人一种不寒而栗的感觉。

LONG);
  set("objects", ([ /* sizeof() == 3 */
  "/open/prayer/npc/left1" : 1,        	//护法
  "/open/prayer/npc/right1" : 1,		//护法
  "/open/prayer/npc/pope" : 1,          //教主
]));
  set("exits", ([ /* sizeof() == 4 */
    "up" : "/open/prayer/room/prayer_talk",
	"south" : "/open/prayer/room/punch1-2",		//大听
	"east" : "/open/prayer/room/punch1-3",		//副帮主
	"west" : "/open/prayer/room/punch1-4",		//军师
]));
   set("light_up", 1);

  setup();
}
 
int valid_leave(object me, string dir)
{
if (dir == "up" && me ->query("class") != "prayer")
     return notify_fail(HIY"林宏升说道:在我圣火教内乱闯,想死吗..\n"NOR);
     return :: valid_leave(me, dir);
}
