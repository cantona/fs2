// 钻石 by ACKY

#include <ansi.h>
inherit MONEY;

void create()
{
	set_name(HIW"钻石"NOR, ({"diamond","diamond_money"}));
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("money_id", "diamond");
		set("long", "商人远从亚立安帝国带来的耀眼钢钻，据说一粒价值一万两黄金哩。\n");
		set("unit", "袋");
		set("base_value", 100000000); //价值一万两黄金
		set("base_unit", "粒");
		set("base_weight", 10);
	}
	set_amount(1);
	setup();
}
