#include <weapon.h>

inherit DAGGER;

void create()
{
        set_name("小匕首",({"little dagger","dagger"}) );
	set_weight(1000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "把");
                set("long","这只是一把不起眼的小匕首。\n");
                set("value",150);
                set("material", "iron");
	}
        init_dagger(10);

// These properties are optional, if you don't set them, it will use the
// default values.

	set("wield_msg", "$N从怀中摸出一把$n握在手中。\n");
	set("unwield_msg", "$N将手中的$n藏入怀中。\n");

// The setup() is required.

	setup();
}
