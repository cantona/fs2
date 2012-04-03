#include <weapon.h>
#include <ansi.h>

inherit WHIP;

void create()
{
        set_name("魔鞭",({ "daemon whip","whip"}));
        set_weight(4000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit","条");
                set("value",10000);
                set("material","iron");
                set("wield_msg", "$N从怀中摸出一条$n握在手中。\n");
                set("unwield_msg", "$N将手中的$n藏入怀中。\n");
        }
        init_whip(35);
        setup();
}                             
