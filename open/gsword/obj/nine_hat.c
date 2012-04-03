// nine_hat by roger

#include <armor.h>

inherit HEAD;

void create()
{
	set_name("太初九流之冠", ({"nine_hat", "hat"}));
	set_weight(5000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
	set("long", "传说中华山君所佩之冠。\n");
	set("unit", "顶");
	set("value", 70000);
	set("material", "steel");
	set("armor_prop/armor",9);
	}
	setup();
}
