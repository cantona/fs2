// fusword.c
#include <weapon.h>
#include <ansi.h>

inherit UNARMED;

void create()
{
        seteuid(getuid());
set_name(HIY"黄金手链"NOR,({"gold star","star"}));
        set_weight(3000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "把");
set("long","这是一只以黄金打造而成的手环\n");

set("value",80000);
                set("material", "steel");
set("wield_msg","$N戴上$n后，手上发出不可思议的黄金光芒\n");
set("unwield_msg","$N你将$n卸了下来，光芒随之消去。\n");
        }
init_unarmed(20);
        setup();
}
