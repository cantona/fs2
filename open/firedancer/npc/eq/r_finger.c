inherit EQUIP;
#include <ansi.h>

void create()
{
	set_name(HIR"朱雀指套"NOR,({"rose finch's finger","finger"}));
	set_weight(10000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long","火红色的一双指套，于每个指间处都有朱雀的图样。\n");
		set("unit","双");
		set("value",2000);
		set("material","crimsonsteel");
		set("wear_msg",HIR"$N套上$n"HIR"，指套上的朱雀图样转红了。\n"NOR);
		set("unequip_msg",HIR"$N脱下了$n"HIR"，红色的朱雀图样缓缓消逝了。\n"NOR);
		set("armor_prop/force",4);
		set("armor_prop/armor",-16);
	        set("armor_type","finger");
	}
	setup();
}