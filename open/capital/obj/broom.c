//made by smirk
#include <weapon.h>

inherit BLADE;

void create()
{
        set_name("扫帚",({"broom","broom"}) );
        set_weight(500);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "支");
                set("long","这是一支用来扫地的扫帚，坚固可靠。\n");
                set("value",100);
                set("material", "wood");
                set("wield_msg", "$N用力地把$n握在手中。\n");
                set("unwield_msg", "$N将手中的$n随手放在身后。\n");
        }
        init_blade(4);
        setup();
}
