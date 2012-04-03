// short_sword.c

#include <weapon.h>

inherit SWORD;

void create()
{
	set_name("短剑", ({ "short sword", "sword" }) );
	set_weight(7000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "把");
		set("value", 400);
		set("material", "iron");
		set("long",
			"一把普通的短剑，把手部份用布缠绕了好几圈以防止武器脱手。\n");
	}
	init_sword(8, SECONDARY);
	setup();
}
