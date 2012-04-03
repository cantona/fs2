// dagger.c : an example weapon

#include <weapon.h>

inherit BLADE;

void create()
{
        set_name("弯月苗刀",({"maiu blade","blade"}) );
        set_weight(10000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "把");
                set("long","一把苗疆特制的大刀,成半月形.\n");
                set("value",1000);
		set("material", "steel");
	}
        init_blade(60);

// These properties are optional, if you don't set them, it will use the
// default values.

        set("wield_msg","$N从背后抽出一把弯月苗刀.\n");
        set("unwield_msg","$N将弯月苗刀收入背后的刀鞘里.\n");

// The setup() is required.

	setup();
}
