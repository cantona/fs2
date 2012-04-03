// by onion
#include <armor.h>

inherit EQUIP;

void create()
{
	set_name("金禄符", ({ "gold amulet", "amulet" }) );
	set_weight(2000);
	if( clonep() )
		set_default_object(__FILE__);
	else 
	{
	  set("long", "这个符咒经过太上道人的施法, 具有避邪驱魔的法力, 符的四周还镶着金边。\n");
	  set("unit", "个");
          set("value", 600);
          set("material", "cloth");
	  set("armor_type","neck");
          set("armor_prop/armor", 3);
	}
	setup();
}

