inherit ROOM;
#include <way.c>

void create()
{
	set("short","蛇寨 置物室");
	set("long",@LONG
这是一个半大不小的密闭空间，你可以看到北方有一个蛇型的座
椅，不过如果说是蛇寨寨主的王座，似乎又显得有点小气，周遭摆满
了许多的黄金与珠宝，看来这里是放置宝物的地方。
LONG);
	set("no_transmit",1);
	set("objects",([
__DIR__"npc/snake_soldier":3,
]));
	set("exits",([
"east":__DIR__"r-17",
"west":__DIR__"r-21",
"north":__DIR__"r-19",
]));
	setup();
}

void init()
{
add_action("do_search","search");
add_action("do_turn","turn");
}

int do_search()
{
object me = this_player();

	tell_object(me,"你仔细的搜索着附近，发现了在你身后有一个蛇型的转轮。\n");
	me->set_temp("snake/search",1);
return 1;
}

int do_turn()
{
object me;

	me = this_player();

	me->delete_temp("snake/search");
	tell_object(me,"你尝试着转动蛇型转轮，结果触动了机关～\n");
	message_vision("$N转出了门外!!\n",me);
	me->move(__DIR__"r-04");
return 1;
}
	