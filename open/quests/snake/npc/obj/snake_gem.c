#include <ansi.h>
#include <armor.h>
inherit NECK;

void create()
{
        set_name(HIG"蛇型项炼"NOR , ({"snake gem","gem","snake-key-2"}));
     set_weight(1000);
     if ( clonep() )
              set_default_object(__FILE__);
     else {
            set("unit", "条");
            set("value", 100000);
            set("material","steel");

            set("armor_prop/force",5);
            set("armor_prop/armor",10);
            set("long","蛇寨三寨主最喜爱的项炼，由于炼制特殊，所以颇具防御能力。\n");
	}
            setup();
}

