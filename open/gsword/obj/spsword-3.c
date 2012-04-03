// sword.c : an example weapon
#include <weapon.h>
#include <ansi.h>

inherit SWORD;

void create()
{
	seteuid(getuid());
	set_name("[1;31m□[1;35ml[1;31m□[1;35m□[1;31m□[1;35mC[0m",({"hon_water_sword","sword"}));
	set_weight(7000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "把");
		set("value",10000);
		set("material", "steel");
                set("wield_msg", "拿着$n,$N似乎激发出无限的力量.\n");
		set("unwield_msg", "$N将手中的$n插入腰间的剑鞘。\n");
	}
	init_sword(95);
	setup();
}
