inherit EQUIP;
#include <ansi.h>

void create()
{
	set_name(HIR"朱雀火篷"NOR,({"rose finch's cape","cape"}));
	set_weight(10000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long","火红色的一条大斗篷，于斗篷中间处有朱雀的图样。\n");
		set("unit","条");
		set("value",2000);
		set("material","crimsonsteel");
		set("wear_msg",HIR"$N披上$n"HIR"，斗篷上的朱雀图样转红了。\n"NOR);
		set("unequip_msg",HIR"$N脱下了$n"HIR"，红色的朱雀图样缓缓消逝了。\n"NOR);
		set("armor_prop/force",2);
		set("armor_prop/armor",-8);
	        set("armor_type","cape");
	}
	setup();
}