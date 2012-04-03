
#include <ansi.h>
inherit EQUIP;

void create()
{
	set_name("耀日镔铁盔",({"helmet"}) );
	set_weight(5000);
	if (clonep() )
		set_default_object(__FILE__);
	else{
		set("long","
一顶以上好精钢打造而成的头盔，在日光的照耀下散发出耀眼的光芒。\n");
		set("armor_type","head");
		set("material","blacksteel");
		set("unit","顶");
		set("armor_prop/armor",5);
		set("value",350);
		set("armor_prop/dodge",-1);
		setup();
	}
}
