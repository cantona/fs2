#include <ansi.h>
inherit EQUIP;

void create()
{
        set_name(HIR"龙纹护膝"NOR,({"dragon legging","legging"}) );
        set_weight(5000);
        if (clonep() )
                set_default_object(__FILE__);
        else{
                set("long","
一付护膝 ,上面有龙的花纹。\n");

                set("armor_type","leggings");
                set("material","blacksteel");
                set("unit","付");
                set("armor_prop/armor",9);
                set("value",400);
                set("armor_prop/force",2);
                set("wear_msg","$N戴上一付$n。\n");
                set("unequip_msg","$N脱下一付$n。\n");
                setup();
        }
}

