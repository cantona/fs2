#include <weapon.h>
#include <ansi.h>
inherit WHIP;
void create()
{
	set_name("冥蛊长鞭", ({"evil whip","whip"}));
	set_weight(500);

	if( clonep() )
             set_default_object(__FILE__);
else

{
	set("material","steel");
	set("value",300);
set("long","这是一把冥蛊教徒贯用的鞭子。\n");

	set("wield_msg", "$N将鞭子缓缓的从腰间解下，握在手上。\n");
	set("unwield_msg","$N将鞭子放下，缠在腰上。\n");
	set("unit", "把");
}
	init_whip(8);
	setup();
}

