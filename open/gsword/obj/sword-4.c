// sword.c : an example weapon
#include <weapon.h>
#include <ansi.h>

inherit SWORD;

void create()
{
	seteuid(getuid());
     set_name("龙泉剑",({"hu sword","sword"}));
	set_weight(7000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "把");
                set("long","仙剑七子中赵鹤的配剑\n");
		set("value",10000);
		set("material", "steel");
                set("wield_msg", "拿着$n,$N觉的浑身充满了力量.\n");
		set("unwield_msg", "$N将手中的$n插入腰间的剑鞘。\n");
	}
	init_sword(60);
	setup();
}
