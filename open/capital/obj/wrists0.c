// by onion
#include <armor.h>
inherit EQUIP;
void create()
{
	set_name("手链", ({ "chainlet" }));
	set_weight(1000);
	if( clonep() )
		set_default_object(__FILE__);
	else 
	{
	  set("long", "精细的一条小链子, 可以结在双手的腕上。\n");
	  set("unit", "条");
	  set("value", 300);
	  set("material", "iron");
	  set("armor_type","wrists");
	  set("armor_prop/armor", 2);
	}
	setup();
}

