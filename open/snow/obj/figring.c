// fusword.c
#include <weapon.h>
#include <ansi.h>

inherit UNARMED;

void create()
{
        seteuid(getuid());
        set_name(HIC "金钢指环" NOR,({"figring"}));
        set_weight(3000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "把");
        set("long","这是一只以金钢石所制成的指环，可以提升空手的伤害力．\n");

                set("value",10000);
                set("material", "steel");
        set("wield_msg", "$N戴上$n，霎时间你觉得力量提升了数倍  \n");
        set("unwield_msg", "$N你将手上的$n卸了下来 。\n");
        }
	init_unarmed(45);
        setup();
}
