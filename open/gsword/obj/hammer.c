// sword.c : an example weapon

#include <weapon.h>

inherit HAMMER;

void create()
{
	set_name("铁锤", ({"hammer" }));
	set_weight(7000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "把");
		set("long", "一把生锈的铁锤 .\n");
		set("value", 230);
		set("material", "iron");
	}
        init_hammer(10);

// These properties are optional, if you don't set them, it will use the
// default values.

	set("wield_msg", "$N 拿出一把$n,称了称重量 ,握在手中 。\n");
	set("unwield_msg", "$N将手中的$n收入怀中。\n");

// The setup() is required.

	setup();
}
