// blade.c

#include <weapon.h>

inherit BLADE;

void create()
{
	set_name("大刀", ({ "blade" }) );
	set_weight(10000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "柄");
		set("value", 800);
		set("material", "iron");
		set("long", "这是一柄沈重的大刀，刀柄绑着一条红巾，使起来虎虎生风。\n");
		set("wield_msg", "$N抽出一柄明晃晃的$n握在手中。\n");
		set("unwield_msg", "$N将手中的$n插入腰间的刀鞘。\n");
	}
	init_blade(20);
	setup();
}
