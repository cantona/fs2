#include <weapon.h>

inherit STICK;

void create()
{
        set_name( "金刚三节棍" , ({ "emery stick","stick"}) );
        set_weight(13500);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "柄");
                set("long", "一柄玄铁制的三节棍，棍中暗藏金刚砂，在攻击时可以增加局部的伤害。\n");
                set("value", 10000);
                set("material", "blacksteel");
        }
        init_stick(60);

        set("wield_msg", "$N暗运内劲，$n感受到这股内劲后，铮铮作响。\n");
        set("unwield_msg", "$N内劲一收，$n的响声才渐渐平息。\n");

        setup();
}                   