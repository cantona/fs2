
#include <ansi.h>
#include <weapon.h>
inherit BLADE;

void create()
{
	set_name("朴刀",({"pu blade","blade"}) );
	set_weight(4000);
	if ( clonep())
		set_default_object(__FILE__);
else 	{
	set("long","一把沉重但威力不错的大刀，是强盗们惯用的兵器之一。\n");
	set("meterial","steel");
	set("value", 200);
	set("unit","把");
	set("wield_msg", "$N从腰间抽出一把明晃晃的大刀当武器。\n");
	set("unwield_msg","$N将刀收回腰中的刀鞘中。\n");
}
	init_blade(30);
	setup();
}


