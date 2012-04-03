// steelblade.c

#include <weapon.h>

inherit BLADE;

void create()
{
	set_name("钢刀", ({ "steel blade", "blade" }) );
	set_weight(8000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "柄");
		set("value",800);
		set("material", "steel");
		set("long", "这是一柄用精钢炼制而成的刀，刀刃十分的锋利。\n");
		set("wield_msg", "$N抽出一柄锋利的$n握在手中。\n");
		set("unwield_msg", "$N将手中的$n插入腰间的刀鞘。\n");
	}
	init_blade(25);
	setup();
}
