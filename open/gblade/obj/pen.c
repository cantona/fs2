//blade.c : 大刀

#include <weapon.h>

inherit STABBER;

void create()
{
	set_name("铁笔",({"iron pen","pen"}));
	set_weight(800);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "支");
		set("long","以生铁打造而成的笔 , 专供读书人御敌之用。\n");
		set("value",400);
	set("material","iron");
		set("wield_msg", "$N从怀里拿出一只$n握在手中。\n");
		set("unwield_msg", "$N将手中的$n收进怀里。\n");
	}
	init_stabber(12);
	setup();
}
