// made by onion
#include <weapon.h>
inherit STABBER;
void create()
{
        set_name("玉骨薄扇",({"jade fan","fan"}) );
        set_weight(10000);
        if( clonep() )
		set_default_object(__FILE__);
	else {
        set("long","以上好纯玉制成的薄扇, 看起来颇有古意。\n");
        set("unit","把");
        set("value", 1000);
        set("material","blacksteel");
	}
        init_stabber(25);
        setup();
}
