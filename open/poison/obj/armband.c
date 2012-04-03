#include <ansi.h>

inherit EQUIP;

void create()
{
	set_name("蛇皮护臂", ({"snake armband","armband"}) );
	set_weight(1000);
	if ( clonep() )
		set_default_object(__FILE__);
	else{
		set("long", "
这是一个由蛇皮硝制成的护臂，边缘还用铜片交织紧密地结合。\n");
		set("unit", "副");
		set("value", 1000);
		set("material", "leather");
		set("armor_prop/armor",7);
		set("armor_type","armbands");
		set("armor_prop/dodge", 5);

		}
		setup();
}
