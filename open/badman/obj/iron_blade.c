// ironblade.c

#include <weapon.h>

inherit BLADE;

void create()
{
	set_name("铁刀", ({ "iron blade", "blade" }) );
	set_weight(7000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "把");
		set("value", 250);
		set("material", "iron");
		set("long", "这是一把铁制的大刀，黑漆漆的刀身上还带了点锈。\n");
		set("wield_msg", "$N抽出一把黑漆漆的$n握在手中。\n");
		set("unwield_msg", "$N将手中的$n收回腰间的刀鞘。\n");
	}
	init_blade(5);
	setup();
}
