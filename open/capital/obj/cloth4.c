// make by Onion
#include <armor.h>
inherit CLOTH;

void create()
{
	set_name("湛蓝色长袍", ({ "blue long-robe", "blue","robe" }) );
	set_weight(5000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long", "湛蓝的天空色, 使的整件长袍似乎有种透明的感觉。\n");
		set("unit", "件");
		set("value", 2000);
		set("material", "cloth");
		set("armor_prop/armor", 6);
	}
	setup();
}

