#include <weapon.h>
inherit STABBER;
void create()
{
        set_name("小银针", ({ "silver needle", "needle" }) );
        set_weight(3000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("unit", "支");
        set("no_drop",1);
        set("no_give",1);
        set("no_sell",1);
        set("value", 1500);
        set("material", "silver");
                set("long", "这是一支医生专用的银针，如果懂得使用技巧的话，将可发挥出极大的威力。\n");
                set("wield_msg", "只见银光一闪，$N的手中已经多了一支$n。\n");
                set("unwield_msg", "$N将手中的$n收了起来。\n");
        }
        init_stabber(20);
        setup();
}


