inherit ROOM;
#include <ansi.h>

void create()
{
	set("short",HIG"琰 扬 居 -- "NOR+YEL"大 松 树"NOR);
	set("long",@LONG
你有点不敢相信自己的眼睛，这么大的一只蜜蜂，或许就你所知
的，牠是应该叫做蜜蜂吧，你可以清楚的看到这些你所谓的蜜蜂正在
此棵树的最顶端进进出出自己的蜂巢，一但你有想继续往上爬的动作
，牠们就仿佛在警告你的不断震动翅膀，看来如果不驱走目前在你身
旁围绕的〔蜜蜂〕，你是无法继续往上爬。
LONG);
	set("evil_area",1);
	set("no_transmit",1);
	set("exits",([
"up":__DIR__"b-46",
"down":__DIR__"b-44",
]));
	setup();
}

void init()
{
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
	

int valid_leave(object me,string dir)
{
	if( dir == "up")
	{
		if( !present("chu-wood",me) )
		{
			message_vision("$N抓住树干，准备冲向树顶时，一群蜜蜂突然飞绕在你身旁～\n",me);
			call_out("move",1,me);
			return notify_fail(HIY"你心想～不好了...:~...\n"NOR);
		}
		if( !me->query_temp("evil/water/climb") )
		{
			message_vision("$N努力的想爬上去，可是却不小心的没抓好树干～\n",me);
			call_out("move",1,me);
			return notify_fail(HIY"你心想～不好了...:~...\n"NOR);
		}
	message_vision("$N顺利的爬了上去。\n",me);
	me->delete_temp("evil/water/climb");
	}
	return 1;
}

int move(object me)
{

	me->move("/open/evil-area/water/b-20");
	me->receive_wound("kee",500);
	COMBAT_D->report_status(me,1);
	message_vision(HIR"\n$N重重的从树上跌落于地～\n"NOR);
}