//green-blade.c
//携带mob exp180万;kee 5000;dragon-blade 120;比master还强
#include <weapon.h>
#include <ansi.h>

inherit BLADE;

void create()
{
	seteuid(getuid());
	set_name(HIG"绿波香露刀"NOR,({"green-blade","blade"}));
	set_weight(50000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "把");
		set("long","一把泛着淡淡绿光传说中的宝刀。\n");
		set("value",100000);
		set("material", "steel");
                set("wield_msg", HIG"拿着$n"HIG",$N的手臂上泛起绿光\n"NOR);
		set("unwield_msg", "$N放下$n"HIG",手臂上的绿光也消失了。\n");
	}
	init_blade(65);

	setup();
}
