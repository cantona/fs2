#include <weapon.h>
#include <ansi.h>
inherit STABBER;
void create()
{
        set_name(HIW"留香扇"NOR,({"ancient fan","fan"}) );
        set_weight(40000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","相传是盗帅"HIW"楚留香"NOR"遗留下来的扇子,扇上还有他的真迹.\n");
        set("unit","把");
        set("value", 30000);
        set("material","blacksteel");
                  set("armor_prop/stabber",10);
        }
        init_stabber(120);
        set("wield_msg", "$N从怀中把扇子掏出来, 扇上有"HIW"楚留香"NOR"三个大字.\n");
        set("unwield_msg", "$N把扇子合上, 小心的收到怀里.\n");
        setup();
}
