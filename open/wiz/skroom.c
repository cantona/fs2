inherit ROOM;
#include <ansi.h>

void create ()
{
set ("short", "SWY 技能特功发言处");
  set ("long", @LONG

这里就是让ppl发表skills和funcs的地方，请注意下列规则:
1.不要乱批评skills and funcs
2.有意见请提出那不合理
3.post后静待我来处理，不必post催赶
4.以后再加

LONG);

	set("light_up",1);
	set("no_kill",1);
	set("no_fight",1);
  set("exits", ([ /* sizeof() == 2 */
		"east" : "/open/common/room/inn",
	]));

  setup();
  //call_other("/obj/board/skillswy_b","天神");
}

