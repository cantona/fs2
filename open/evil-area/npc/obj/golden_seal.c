inherit COMBINED_ITEM;
#include <ansi.h>

void create()
{
	set_name(HIY"黄金印"NOR,({"golden seal","seal"}));
	set_weight(1000);
	if(clonep())
		set_default_object(__FILE__);
	else
	{
	set("value",10000);
	set("base_unit","颗");
	set("unit","盒");
	set("long",
"一个由黄金所雕硕成的印子。\n");
	}
	set_amount(1);
	setup();
}