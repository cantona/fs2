// sword.c : an example weapon

#include <weapon.h>

inherit BLADE;

void create()
{
	set_name("镀金刀",({"gold blade","blade"}));
	set_weight(10000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "把");
		set("long","一把极为锋利的大刀 , 金光闪闪。\n");
		set("value",3500);
		set("material", "gold");
		set("wield_msg", "$N「唰”地一声抽出一把$n握在手中。\n");
		set("unwield_msg", "$N将手中的$n插入腰间的刀鞘。\n");
	}
	init_blade(30);
	setup();
}
