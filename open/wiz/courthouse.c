// Room: /open/wiz/courthouse.c

#include <login.h>
#include <ansi.h>

inherit ROOM;

void create()
{
	set("short", "法院");
	set( "build", 78 );
	set("long", @LONG
这里是冰判官审问机器人的法院，你一定是被人检举或是
行为太像机器人，才会来到这里，如果你答不出冰判官的三个
问题，可是会被冰判官踢回家睡觉唷! 好好回答(answer)吧。   
LONG
	);
	set("light_up",1);
	set("no_fight", 1);
	set("no_transmit", 1);
	set("no_chome",1);
	set("objects", ([
		__DIR__"npc/judge":1,
]));
	set("exits", ([
		"down":	STARTROOM,
	]) );
	setup();
}

int valid_leave(object me, string dir)
{
	if (!present("judge", this_object()))
		return 1;
	else
		return 0;
}

void test_me(object me)
{
	me->set_temp("old_startroom", me->query("startroom"));
	me->set("startroom", __FILE__);
	me->set_temp("last_location", base_name(environment(me)));
	message_vision("忽然一阵闪光罩住了$N。\n", me);
	me->move(this_object());
}
