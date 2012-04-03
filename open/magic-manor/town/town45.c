inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "密林迷阵");
        set ("long", @LONG
两旁的古木高耸入云，树叶漫天遮荫，在微弱的光线下，前方的
路总是迷蒙看不清，凶猛的野兽叫声忽远又忽近，诡异的气氛下，心
情总是起伏不定，看看回头的路也已被黑暗淹没了，也许你只有永远
的迷失在这密林之中了。
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);
	set("light_up",-1);

        set("exits", ([ /* sizeof() == 4 */
	]));

        setup();
}

void init()
{
	object me,ob;
	int os;
	me = this_player();

	if( me->query("quests/can_go_magic-manor") == 1 )
	{
	  if( present("magic sign",me) )
	  {
	  ob = present("magic sign",me);
	  os = ob->query("magic-manor");
	    if( os == 6 )
	    {
	    call_out("msg1",3,me);
	    }
	  }
	}
}

int msg1()
{
	object me;
	me=this_player();
        tell_object(me,HIC"只见你身上的聚灵引发出一道光芒指向东方。\n"NOR);
	add_action("do_go","go");
}

int do_go(string str)
{
	object me,obj,ob;
	int os;
	obj = this_object();
	me = this_player();
	ob = present("magic sign",me);
	os = ob->query("magic-manor");

	if(str == "east" )
        if( present("magic sign",me) && os == 6 && me->query("quests/can_go_magic-manor") == 1 )
	{
	tell_room(obj,"聚灵引光芒所到，暗不透光的密林出现出了一条路。\n");
	message_vision("$N在聚灵引开路下，慢慢走向那一条路。\n",me);
	tell_room(obj,"随着光芒渐渐散去，光芒所指的路也消失无踪。\n");
	me->move(__DIR__ "town46");
	return 1;
	}
}
