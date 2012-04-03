// sword.c : an example weapon

#include <weapon.h>

inherit BLADE;
				
void create()
{
        set_name("虎头钢刀",({"steel blade","blade"}) );
	set_weight(10000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "把");
                set("long","这是把精钢铸成的长刀，刻了个虎头做装饰。\n");
		set("value",950);
		set("material", "steel");
		set("wield_msg", "$N「唰”地一声抽出一把$n握在手中。\n");
		set("unwield_msg", "$N将手中的$n插入腰间的剑鞘。\n");
	}
	init_blade(40);
	setup();
}
