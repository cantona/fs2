
#include <ansi.h>
#include <weapon.h>
inherit HAMMER;
void create()
{
	set_name("扫帚",({"broom"}) );
	set_weight(3000);
	if ( clonep() )
		set_default_object(__FILE__);
	else{
		set("long","
一把打扫时所用的扫帚。\n");
		set("material","iron");
	set("value",80);
		set("unit","把");
		}
	init_hammer(4);
	setup();
}
