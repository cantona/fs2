inherit EQUIP;
#include <ansi.h>

void create()
{
	set_name(HIR"朱雀护套"NOR,({"rose finch's hands","hands"}));
	set_weight(10000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long","火红色的一双手套，于手背处画有朱雀的图样。\n");
		set("unit","双");
		set("value",2000);
		set("material","silver");
		set("wear_msg",HIR"$N套上$n"HIR"，手背上的朱雀图样转红了。\n"NOR);
		set("unequip_msg",HIR"$N脱下了$n"HIR"，红色的朱雀图样缓缓消逝了。\n"NOR);
		set("armor_prop/force",4);
		set("armor_prop/armor",-16);
	        set("armor_type","hands");
	}
	setup();
}