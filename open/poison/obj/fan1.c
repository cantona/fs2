#include <weapon.h>
#include <ansi.h>
inherit STABBER;
void create()
{
        set_name(MAG"美人摺扇"NOR,({"beauty fan","fan"}) );
        set_weight(25000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","这是一把材质特殊的扇子 ,画满了美女 .\n");
        set("unit","件");
        set("value",10000);
        set("material","steel");
        }
        init_stabber(75);
        set("wield_msg", "$N从怀中掏出一把美人摺扇.\n");
        set("unwield_msg", "$N将手中的美人摺扇放入怀中.\n");
        setup();
}
