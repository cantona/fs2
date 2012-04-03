#include <ansi.h>
inherit ROOM;

void create()
{
	set("short",BBLU+YEL"震邪道"NOR);
	set("long",@LONG
一个巨大的水濂呈现在你眼前, 水是由下往上流, 逆流而上, 真
可谓之人间绝景; 滔滔水声, 气势澎湃, 你大略估计了一下水势的强
度, 如果硬是要冲入水濂内的中, 很有可能会被强大的水压给弹出通
道外。
LONG);
	set("exits",([
"north":__DIR__"e00",
"south":__DIR__"e02",
]));
	set("no_transmit",1);
	setup();
}

int valid_leave(object me,string dir)
{
	me=this_player();
	if(dir=="south")
	{
		if(!me->query_temp("evil/w_enter"))
		{
			message_vision(HIR"
$N试着强行通过水濂，结果〔碰〕的一声～

"HIY"$N被强大的水压给弹出通道外！\n"NOR,me);
		me->move(__DIR__"e00");
		return notify_fail("\n你重重的跌坐在地上，心底暗自喊痛...\n");
		}
	message_vision(HIC"$N全身流动着一股浅蓝色的气流，缓缓着走向水濂内。\n"NOR,me);
	return 1;
	}
return 1;
}