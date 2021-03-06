// Room: /open/poison/room/room3
#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "猎户");
  set ("long", @LONG
这是一个猎人的家，墙壁上挂了一把制作精细的大弓，
旁边放置一筒凤尾金箭，看样子这个猎人的臂力必定是强而
有力，此外尚挂了一张纯白虎皮，室内则摆有几张精简的桌
椅，是一个相当清净的房间。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"room2",
  "south" : __DIR__"road3",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/poison/npc/hunter" : 1,
]));

  setup();
}

int valid_leave(object me, string dir)
{
	object who;
	if ( dir == "west" && who = present("hunter", environment(me)) )
	     if(me->query("class") != "poisoner")
		return notify_fail(HIC"猎人怒道：想私闯民宅呀!!\n"NOR);
	return ::valid_leave(me, dir);
}
