#include <armor.h>
inherit EQUIP;

void create()
{
	set_name("炼甲", ({ "chainmail","mail" }) );
	set_weight(100000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long", "一件铁制的炼甲.\n");
		set("unit", "件");
		set("value", 600);
                set("armor_type","cloth");
 		set("material", "steal");
		set("armor_prop/armor", 8);
	}
	setup();
}

