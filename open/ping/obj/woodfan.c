// made by ccat
#include <weapon.h>
inherit STABBER;
void create()
{
        set_name("檀香木扇",({"wood fan","fan"}) );
        set_weight(5000);
        if( clonep() )
		set_default_object(__FILE__);
	else {
        set("long",".\n");
        set("unit","件");
        set("value", 500);
        set("material","wood");
	}
        init_stabber(30);
        set("wield_msg", "$N从怀中掏出一把扇子.\n");
        set("unwield_msg", "$N将手中的扇子放入怀中.\n");
        setup();
}
