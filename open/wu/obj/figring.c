// fusword.c
#include <weapon.h>
#include <ansi.h>

inherit UNARMED;

void create()
{
        seteuid(getuid());
        set_name(HIY "狂龙翔天破" NOR,({"carzy dragon","ring"}));
        set_weight(3000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "把");
        set("long","这是一把传说中由神打造的武器，其威力无从得知!!\n");
                set("value",10000);
                set("material", "steel");
        set("wield_msg", "$N戴上$n，狂龙的斗气从$N身上散发出来。\n");
        set("unwield_msg", "$N你将手上的$n卸了下来后，龙的斗气随之消逝。 \n");
        }
        init_unarmed(65);
set("weapon_prop/unarmed", 10);
set("weapon_prop/force",10);
        setup();
}
