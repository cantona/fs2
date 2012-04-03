// knife.c

#include <weapon.h>

inherit STICK;

void create()
{
	set_name("钓竿",({"fishing rod","rod"}));
	set_weight(800);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "把");
		set("value",100);
		set("material","wood");
		set("long","一把木制的钓竿 , 似乎可以当作武器来用 .\n");
		set("wield_msg","$N将$n拿在手中 .\n");
		set("unwield_msg", "$N将手中的$n收了起来 .\n");
	}
	init_stick(5);
	setup();
}
