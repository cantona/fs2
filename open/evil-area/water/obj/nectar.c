inherit COMBINED_ITEM;
#include <ansi.h>

void create()
{
	set_name(HIY"千花蜜"NOR,({"flower nectar","nectar"}));
	set_weight(100);
	if( clonep() )
                set_default_object(__FILE__);
	else
	{
		set("value",10);
		set("base_unit","匙");
		set("unit","罐");
		set("long","鼓蜂最喜欢采集的花蜜之一。\n");
	}
	set_amount(1);
setup();
}