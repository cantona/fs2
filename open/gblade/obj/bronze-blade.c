
#include <weapon.h>

inherit BLADE;

void create()
{
        set_name("镶铜刀", ({ "bronze blade","blade" }));
        set_weight(7500);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "把");
                set("long", "
一把由青铜镶造而成的刀，刀柄处系着黄色缎带，是金刀门入门弟子初学
刀法所用的兵刃。\n");
set("value",400);
                set("value", 500);
                set("material", "steel");
                set("wield_msg", "黄光一闪，$N从刀鞘中抽出一把$n握在手中。\n");
                set("unwield_msg", "$N将手中的$n插入背后的刀鞘里。\n");
        }
	init_blade(18);

	set("ski_type1", "blade");
	set("ski_level1", 10);
        setup();
}

