#include <weapon.h>
inherit BLADE;

void create()
{
        seteuid(getuid());
        set_name("切菜刀" ,({"chopping knife","knife"}));
        set_weight(1000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "把");
        set("long","一把很普通的切菜刀，刀柄上头沾满了油渍。
\n");
        set("value",100);
        set("material", "stell");
        set("wield_msg", "$N你把菜刀拿在手上挥舞了几下，啐！还真是不搭调。\n");
        set("unwield_msg", "$N把菜刀纳入怀中。\n");
        }
	init_blade(8);
        setup();
}
