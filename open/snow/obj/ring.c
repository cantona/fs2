// fusword.c
#include <weapon.h>
#include <ansi.h>

inherit UNARMED;

void create()
{
        seteuid(getuid());
set_name(HIW"白金指环"NOR,({"platinum ring","ring"}));
set_weight(4000);

        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "把");
set("long","这是从雪泉洞里的岩壁所挖出来一个纯白金矿质所提练出来的指环。\n");

                set("value",10000);
            set("material","gold");
set("wield_msg","$N戴起$n突然霎那间力量提升了不少!!");
set("armor_prop/unarmed",5);
        }
        init_unarmed(40);
        setup();
}
