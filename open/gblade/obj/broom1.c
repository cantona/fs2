#include <weapon.h>

inherit STICK;

void create()
{
        set_name("扫帚", ({ "broom" }));
        set_weight(4000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "把");
                set("long", "
一把满沾尘埃的扫帚，是长工用来清扫内院用的。
\n");
                set("value", 95);
                set("material", "wood");
                set("wield_msg", "$N迟疑了一下，将一把$n握在手中。\n");
                set("unwield_msg", "$N将手中的$n放下。\n");
        }
        init_stick(1);
        setup();
}
