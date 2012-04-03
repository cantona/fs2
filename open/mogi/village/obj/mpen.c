#include <weapon.h>
#include <ansi.h>

inherit STABBER;

void create()
{
        set_name("封佛笔",({"daemon pen","pen"}));
        set_weight(1000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "支");
                set("value",1500);
                set("material", "steel");
                set("wield_msg", "$N从怀里拿出一只$n握在手中。\n");
                set("unwield_msg", "$N将手中的$n收进怀里。\n");
        }
        init_stabber(30);
        setup();
} 
                        
