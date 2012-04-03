// sword.c : an example weapon

#include <weapon.h>

inherit SWORD;

void create()
{
        set_name("竹剑", ({ "chu sword","sword" }) );
        set_weight(3000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "把");
                set("long","这是一把练习用的细竹剑,它似乎没有杀伤力.\n");
                set("value", 3);
                set("material","wood");
	}
        init_sword(1);

// These properties are optional, if you don't set them, it will use the
// default values.

	set("wield_msg", "$N「唰”地一声抽出一把$n握在手中。\n");
        set("unwield_msg", "$N将手中的$n插入腰间的剑鞘。\n");

// The setup() is required.

	setup();
}
