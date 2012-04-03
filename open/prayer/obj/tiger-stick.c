#include <weapon.h>
#include <weapon.h> 

inherit STICK;

void create()
{
        set_name( "虎牙双节棍" , ({ "tiger stick","stick"}) );
        set_weight(12000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "根");
                set("long", "一根钢制的双节棍，尾端则加上邪虎的虎牙，增强攻击力。\n");
                set("value", 6000);
                set("material", "steel");
        }
        init_stick(30);

        set("wield_msg", "[36m只见到$N大喝一声，$n便从背后的布包里飞跃而出[0m。\n");
        set("unwield_msg", "$N向空中一抛，$n便自动飞回布包内。\n");

        setup();
}                   