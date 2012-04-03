#include <room.h>
#include "../../open.h"
inherit ROOM;

void create ()
{
  set("short","悬壁");
  set ("long", @LONG
顺着绳子(rope)往下，一直爬到了悬壁中间，你发现这里有一处洞穴
洞穴里看起来暗暗的，不知道藏着什么玄机，有怪物? 还是有宝物
或是什么人藏在这? 要进入? 还是要逃?
 
LONG);

  set("exits", ([ /* sizeof() == 3 */
	"enter":__DIR__"r2",
]));

  set("light_up", 1);

  setup();
}
void init()
{
	add_action("do_look","look");
	add_action("do_catch","catch");
	add_action("do_climb","climb");
}
int valid_leave(object me,string dir)
{
	if(dir=="enter")
	me->delete_temp("catch_robe");
	return 1;
}
int do_look(string str)
{
if(str=="rope")
	{
  tell_object(this_player(),"你看到这条绳子挂在悬壁上，必须用抓的(catch)过来。\n");
		return 1;
	}
	return 0;
}
int do_catch(string str)
{
        if(str=="rope")
	{
        message_vision("$N紧紧的抓住绳子，发现出口就在上方(climb up)。\n",this_player());
                this_player()->set_temp("catch_rope",1);
		return 1;
	}
	return 0;
}
int do_climb(string str)
{
	if(str!="up") return 0;
	message_vision("$N抓住绳子慢慢的爬了上去。\n",this_player());
        this_player()->move("/open/snow/room/black1");
	return 1;
}
