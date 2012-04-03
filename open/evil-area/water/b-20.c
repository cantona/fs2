inherit ROOM;
#include <ansi.h>

void create ()
{
	set("short",HIG"琰 扬 居 -- 后 院"NOR);
	set("long",@LONG
高耸的天空，仿佛能藉着登上这棵大松树而到达最顶端，这棵树
可真所谓之高耸入云霄，岁月的痕迹已经留在牠那斑驳而充满树洞的
身躯，如果想要爬(climb)上这棵大松树，要先找立足点(find_hole)
，免得一个抓不稳，跌了个狗吃屎...那可真的划不来啊...
LONG);
	set("evil_area",1);
	set("no_transmit",1);
	set("exits",([
"north":__DIR__"b-19",
"south":__DIR__"b-23",
"east":__DIR__"b-21",
]));
	setup();
}

void init()
{
add_action("do_climb","climb");
add_action("do_find","find_hole");
}

int do_find()
{
object me = this_player();
int kar,str;

	kar = (int)me->query("kar");
	str = (int)me->query("str");

	me->delete_temp("evil/water/climb");

	if( kar < random(50) )
		return notify_fail("你不断的寻找着踏脚点，可是周遭似乎找不到～\n");

	tell_object(me,"你左右巡视后，找到了一个踏脚点。\n");

	if( str < random(50) )
		return notify_fail("不过位置似乎有点远，你评估你的力量，可能会无法施力而掉下去。\n");

	me->set_temp("evil/water/climb",1);
	tell_object(me,"你评估了一下，应该可以顺利的爬上去。\n");
return 1;
}		
	

int do_climb()
{
object me;

	me = this_player();

	if( !me->query_temp("evil/water/climb") )
	{
		message_vision("$N努力的想爬上去，可是却不小心的掉落于地～\n",me);
		me->receive_wound("kee",500);
		COMBAT_D->report_status(me,1);
		return notify_fail("你忍不住的心中暗喊疼～\n");
	}
	message_vision("$N顺利的爬了上去。\n",me);
	me->delete_temp("evil/water/climb");
	me->move(__DIR__"b-28");
return 1;
}