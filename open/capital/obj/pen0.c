// made by onion
#include <weapon.h>
inherit STABBER;
void create()
{
        set_name("精钢笔",({"steel pen","pen"}) );
        set_weight(15000);
        if( clonep() )
		set_default_object(__FILE__);
	else {
        set("long","生铁经历锻炼数天打造而成, 外表黝黑。\n");
        set("unit","支");
        set("value", 200);
        set("material","steel");
	}
        init_stabber(30);
        setup();
}
