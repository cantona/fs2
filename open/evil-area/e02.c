#include <ansi.h>
inherit ROOM;
string sign();

void create()
{
	set("short",BBLU+YEL"震邪道"NOR);
	set("long",@LONG
除了你来时的通道外, 四处都已经被砖瓦给封死了, 地上布满了
砂土, 除此之外, 在沙堆中, 有一个告示牌(sign)...
LONG);
	set("exits",([
"north":__DIR__"e01",
]));
	set("item_desc",([
"sign": (: sign :),
]));
	set("no_transmit",1);
	setup();
}

string sign()
{
	object me=this_player();

	tell_object(me,"\n斑黄的木板写着：此路只为有缘者开...\n");
	call_out("move",1,me);
	return "\n";
}

int move(object me)
{
	me=this_player();
	if(!me->query_temp("evil/d_enter"))
		return notify_fail(" 儒非有缘人...\n");
	message_vision(YEL"地下的尘土突然开始移动～

$N脚下的土开始下陷，$N整个人被土堆吞噬了...\n\n"NOR,me);
	me->move(__DIR__"e03");
message_vision(HIY"\n〔碰〕的一声巨响～$N掉了下来！\n"NOR,me);
	return 1;
}