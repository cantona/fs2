// by onion
#include <armor.h>
inherit EQUIP;
void create()
{
	set_name("纶巾", ({ "hood" }));
	set_weight(1000);
	if( clonep() )
		set_default_object(__FILE__);
	else 
	{
	  set("long", "常见的头巾, 是书生的标准装扮\n");
	  set("unit", "条");
          set("value", 30);
	  set("material", "cloth");
	  set("armor_type","head");
	  set("armor_prop/armor", 2);
	}
	setup();
}

