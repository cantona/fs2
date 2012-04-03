// knife.c

#include <weapon.h>

inherit STAFF;

void create()
{
	set_name("柺杖",({"crutch"}));
	set_weight(800);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "把");
		set("value",100);
		set("material","wood");
		set("long","由桧木所制成的柺杖 .\n");
		set("wield_msg","$N将$n拿在手中 .\n");
		set("unwield_msg", "$N将手中的$n收了起来 .\n");
	}
	init_staff(5);
	setup();
}
