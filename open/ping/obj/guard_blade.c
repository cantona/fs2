//blade.c : 大刀
#include <weapon.h>
inherit BLADE;
void create()
{
        set_name("山寨铁制大刀",({"guard blade","blade"}));
	set_weight(10000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "把");
                set("long","一把由山寨守卫自己打造的铁制大刀。\n");
		set("value",1000);
		set("material", "steel");
		set("wield_msg", "$N从腰间抽出一把$n握在手中。\n");
		set("unwield_msg", "$N将手中的$n插入腰间的刀鞘。\n");
	}
	init_blade(28);
	setup();
}
