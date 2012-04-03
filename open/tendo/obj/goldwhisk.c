// goldwhisk.c by Airke
// QC by Anmy (98/2/25)

#include <weapon.h>
inherit WHIP;

void create()
{
	set_name("黄金拂尘",({"Goldwhisk","goldwhisk","whisk"}) );
        set_weight(1500);
        set("value",5000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "把");
	set("long","只有最高阶段的道士才配拥有这把黄金拂尘。\n");	
		set("material","gold");
	set("wield_msg","$N从背后拔出$n握在手中。\n");
		set("unwield_msg","$N将手中的$n挂回背后。\n");
	}
	init_whip(70);
	setup();
}
