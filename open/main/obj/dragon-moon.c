#include <weapon.h>
#include <ansi.h>

inherit BLADE;

void create()
{
    set_name(HIC"青龙偃月刀"NOR,({"Green Dragon Blade","blade"}));
        set_weight(10000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "把");
set("long","这便是传说中武圣关羽所用的宝刀, 据说有青龙之魂栖息在内 .\n");
set("value",50000);
                set("material", "gold");
                  set("armor_prop/blade",10);
                set("wield_msg", "拿着$n,$N觉得浑身充满了神力.\n");
                set("unwield_msg", "$N将手中的$n插入腰间的刀鞘。\n");
        }
        init_blade(120);

        setup();
}

