#include <ansi.h>

inherit EQUIP;

void create()
{
        set_name("圣女颈饰",({"girl-lace","lace"}) );
        set_weight(900);
        if( clonep() )
                set_default_object(__FILE__);
else    {
        set("meterial","gem");
        set("unit","件");
        set("value", 10000);
        set("armor_type","neck");
        set("armor_prop/armor", 4);
        set("long","
西域翠玉制成，是女性的颈部装饰品同时也是防护颈部的防具。\n");
        }
         setup();
}





