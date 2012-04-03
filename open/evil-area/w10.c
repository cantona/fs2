inherit ROOM;
#include <ansi.h>
string stone();

void create ()
{
	set("short",BBLU+YEL"震邪道"NOR+RED"-"BLU"="HIY"幻"HIG"结"HIC"界"NOR+BLU"="RED"-"NOR);
	set("long",@LONG
一个由七彩色所构成的一个网状结界, 而结界网似乎破了一个洞
, 震邪道刚好就位于网状破洞的位置, 恰好弥补了结界的漏洞, 你可
以约略的看到在结界的中心闪烁着一颗火红色的结晶石, 光芒绽放的
令你有点难以睁开眼, 不过结晶石内不断的传出风洞的声音, 仿佛是
通往另一个世界的通道...
LONG);
	set("no_transmit",1);
        set("light_up",-1);
	set("item_desc",([
"结晶石": (: stone :),
]));
	set("exits",([
"east":__DIR__"w09",
]));
	setup();
}

string stone()
{
object me=this_player();
	message_vision(HIY"\n$N专注的注视着结晶石。\n\n"NOR,me);
	call_out("check",1,me);
	return "\n";
}

int check()
{
object me;
int kar,i;
	me=this_player();
	kar=(int)me->query("kar");
		message_vision(HIY"\n$N整个人被吸入了结晶石内～\n"NOR,me);
	if(kar < 10)
		kar=10;
	if(random(40) > kar)
	{
		tell_object(me,HIR"\n结晶石内的通道突然产生剧烈晃动～!!\n\n"NOR);
		i=random(kar);
		me->move(__DIR__"e"+i);
		tell_room(__DIR__"e"+i,HIM"空间突然出现一个裂缝，"+me->query("name")+"从裂缝中掉了出来。\n"NOR);
		message_vision(HIR"\n〔碰〕的一声，$N跌坐在地。\n"NOR,me);
		me->receive_wood("kee",100);
		COMBAT_D->report_status(me,1);
	}
	else
	{
		tell_object(me,HIW"结晶石的通道十分的平稳舒适～

"HIR"\n直到突破了一层红色的火墙后，你感觉开始到有些震动...\n\n"NOR);
		tell_object(users(),HIY"\n\n
众神之一阵怒吼：

	阻隔着人类与邪灵的火墙 "RED"-"BLU"="HIY"幻"HIG"结"HIC"界"NOR+BLU"="RED"-"NOR" 

		"HIY"竟然被 "HIC+me->query("family/family_name")+HIY" 的 "HIW+me->query("name")+HIY" 给闯入了～

	如今，结界再度破损了一角！后果由你们人类自行负责吧！
\n\n"NOR);
	me->move(__DIR__"w11");
	}
return 1;
}