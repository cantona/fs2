//gold-blade.c
#include <weapon.h>
#include <ansi.h>

inherit BLADE;

void create()
{
	seteuid(getuid());
	set_name(HIY"紫金六阳刀"NOR,({"gold blade","blade"}));
	set_weight(15000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "把");
		set("long","一把金光闪闪的宝刀 ,看起来颇为沉重 .\n");
		set("value",1000000);
        set("no_steal",1);
		set("no_get",1);
		set("no_put",1);
		set("material", "crimsonsteel");
		set("rigidity",200);
		set("no_save",1);
                set("wield_msg", "拿着$n,$N觉的浑身充满了力量.\n");
		set("unwield_msg", "$N将手中的$n插入腰间的刀鞘。\n");
	}
	init_blade(100);
/*

	set("ski_type1", "blade");
	set("ski_type2", "gold-blade");
	set("ski_level1", 70);
	set("ski_level2", 70);
*/

	setup();
}
