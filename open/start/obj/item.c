#include <weapon.h>

inherit BLADE;

void create()
{
        set_name("犛把",({"item","item"}) );
        set_weight(1000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "支");
                set("long","这是一支普通的犛把，专门套在牛身上用来耕田用的。\n");
                set("value",100);
                set("material", "wood");
                set("wield_msg", "$N用力地把$n握在手中。\n");
                set("unwield_msg", "$N将手中的$n随手放在身后。\n");
        }
        init_blade(5);
        setup();
}
