// sword.c : an example weapon

#include <weapon.h>

inherit BLADE;

void create()
{
	set_name("乌钢菜刀",({"steel knife","knife"}));
	set_weight(7000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "把");
	set("long","仙剑厨子 --- 王安专用菜刀 。\n");
		set("value",600);
		set("material", "steel");
		set("wield_msg", "$N「唰”地一声抽出一把$n握在手中。\n");
	set("unwield_msg", "$N将手中的$n插入腰间的刀鞘 。\n");
	}
	init_blade(27);
	setup();
}
