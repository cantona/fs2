
#include <ansi.h>
#include <weapon.h>
inherit BLADE;

void create()
{
	set_name("鬼头大刀",({"ghost glaive","glaive"}) );
	set_weight(12000);
	if ( clonep())
		set_default_object(__FILE__);
else 	{
	set("long","
一把极其沉重的大刀，没有过人的臂力想必是举不起来的，刀柄上还刻了一
个狰狞的鬼头当装饰。\n");
	set("meterial","steel");
	set("value", 500);
	set("unit","把");
	set("wield_msg", "$N从腰间抽出一把明晃晃的大刀当武器。\n");
	set("unwield_msg","$N将刀收回腰中的刀鞘中。\n");
}
	init_blade(40);
	setup();
}


