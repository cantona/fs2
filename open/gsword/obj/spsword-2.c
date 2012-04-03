// sword.c : an example weapon
#include <weapon.h>
#include <ansi.h>

inherit SWORD;

void create()
{
	seteuid(getuid());
	set_name("[1;36m□[1;34mH[1;36m□[1;34mB[1;36m□[1;34mC[0m",({"han_bin_sword","sword"}));
	set_weight(7000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "把");
		set("value",10000);
		set("material", "steel");
                set("wield_msg", "拿着$n,$N全身笼罩在一股寒气之下.\n");
		set("unwield_msg", "$N将手中的$n插入腰间的剑鞘。\n");
	}
	init_sword(90);
	setup();
}
