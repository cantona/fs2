
#include <ansi.h>
#include <weapon.h>

inherit AXE;
void create()
{
	set_name("斧头",({"axe"}) );
	set_weight(4000);
	if( clonep())
		set_default_object(__FILE__);
	else{
	set("long","
一把十分锋利的双刃斧头，以木头为柄，是上山砍柴樵夫的最爱。\n");
	set("value",120);
	set("material","steel");
	set("unit","柄");
	}
	init_axe(7);
	setup();
}

 
 
