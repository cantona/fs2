// sword.c : an example weapon
#include <weapon.h>
#include <ansi.h>

inherit SWORD;

void create()
{
	seteuid(getuid());
            set_name("紫薇软剑",({"purple sword","sword"}));
	set_weight(7000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "把");
                set("long","仙剑七子中何双双的配剑，此软剑颇适合何双双剑法的灵动\n");
		set("value",10000);
		set("material", "steel");
     set("wield_msg", "$N手中一抖，闪出了一把$n\n");
        set("unwield_msg", "$N将$n缠回腰间\n");
	}
	init_sword(60);
	setup();
}
