// sword.c : an example weapon

#include <weapon.h>

inherit SWORD;

void create()
{
	set_name("木剑",({"wood sword","sword"}) );
	set_weight(7000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "把");
	set("long","具有增强法力用的木剑。\n");
		set("material","wood");
	set("wield_msg","$N从背后拔出$n握在手中。\n");
		set("unwield_msg","$N将手中的$n挂回背后。\n");
	}
	init_sword(5);
	setup();
}
