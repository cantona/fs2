#include <weapon.h>
#include <ansi.h>
inherit WHIP;

void create()
{
        set_name(MAG"紫羽龙丝拂尘"NOR,({"dragon whisk","whisk"}) );
        set_weight(1500);
        set("value",5000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "把");
                set("material","leather");
        set("wield_msg","$N从背后拔出$n握在手中。\n");
                set("unwield_msg","$N将手中的$n挂回背后。\n");
        }
        init_whip(60);
        setup();
}


