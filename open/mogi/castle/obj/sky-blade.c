//sky-blade.c
//携带mob exp:175万
#include <weapon.h>
#include <ansi.h>

inherit BLADE;

void create()
{
	seteuid(getuid());
	set_name("天邪刀",({"sky-blade","blade"}));
	set_weight(50000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "把");
		set("long","一把看起来颇为邪恶的刀 .\n");
		set("value",50000);
		set("material", "steel");
                set("wield_msg", "拿着$n,$N觉的只想杀！杀！杀！\n");
		set("unwield_msg", "$N放下$n,脸色缓和多了。\n");
	}
	init_blade(60);

	setup();
}
