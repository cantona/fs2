//blade.c : 大刀

#include <weapon.h>

inherit BLADE;

void create()
{
	set_name("柳月刀",({"moon blade","blade"}));
	set_weight(7000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "把");
		set("value",8000);
		set("material", "steel");
		set("wield_msg", "$N从腰间抽出一把$n握在手中。\n");
		set("unwield_msg", "$N将手中的$n插入腰间的刀鞘。\n");
	}
	init_blade(50);

	set("ski_type1", "blade");
	set("ski_type2", "gold-blade");
	set("ski_level1", 50);
	set("ski_level2", 40);
	setup();
}
