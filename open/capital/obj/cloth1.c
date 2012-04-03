// make by Onion
#include <armor.h>
inherit EQUIP;

void create()
{
	set_name("夜行衣", ({ "night cloth", "cloth" }) );
	set_weight(5000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long", "夜间行动最适合的衣服, 几与黑夜混为一体。\n");
		set("unit", "件");
		set("value", 1000);
		set("material", "cloth");
		set("armor_type","cloth");
		set("armor_prop/armor", 5);
	}
	setup();
}

