
#include <ansi.h>
inherit EQUIP;

void create()
{
	set_name("凤凰羽饰",({"phoenix feather","feather"}) );
	set_weight(3000);
	if (clonep() )
		set_default_object(__FILE__);
	else{
		set("long","
以凤凰羽为饰天蚕丝织成的头饰，似有灵力附着于上。\n");

		set("armor_type","head");
		set("material","blacksteel");
		set("unit","件");
		set("armor_prop/armor",9);
		set("value",450);
		set("armor_prop/magic",2);
		setup();
	}
}
