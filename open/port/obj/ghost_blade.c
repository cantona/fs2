//blade.c : 大刀
#include <weapon.h>
inherit BLADE;
void create()
{
	set_name("鬼头刀",({"ghost blade","blade"}));
	set_weight(12000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "把");
		set("long","一把黑色乌钢大刀 , 刀柄一个面目狰狞的鬼头 , 甚为吓人。\n");
		set("value",2000);
		set("material", "steel");
		set("wield_msg", "$N从腰间抽出一把$n握在手中。\n");
		set("unwield_msg", "$N将手中的$n插入腰间的刀鞘。\n");
	}
	init_blade(40);
	setup();
}