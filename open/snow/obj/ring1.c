// fusword.c
#include <weapon.h>
#include <ansi.h>

inherit UNARMED;

void create()
{
        seteuid(getuid());
set_name(HIR"雪熔爪"NOR,({"snowfire ring","ring"}));
set_weight(4000);

        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "把");
set("long","这像武器是在雪苍后山洞所发掘的，爪如其名..一半是千年不溶之雪作的,一半是用百年不冻之熔浆所特制的。\n");

                set("value",10000);
                set("material", "gem");
set("wield_msg","$N拿起$n慢慢的感觉到一阵寒意和酷热,$N觉的全身力气一涌而上。");
set("armor_prop/unarmed",3);
        }
        init_unarmed(35);
        setup();
}
