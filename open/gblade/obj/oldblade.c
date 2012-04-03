#include <weapon.h>

inherit BLADE;

void create()
{
        set_name("柴刀", ({ "blade" }));
        set_weight(5000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "把");
                set("long", "
这是一把劈柴用的柴刀，且因为老旧而带着几点锈斑，握在手里感觉刀柄
即将脱落似的。
\n");
                set("value", 90);
                set("material", "iron");
                set("wield_msg", "$N笨拙地从腰间抽出一把$n握在手中。\n");
                set("unwield_msg", "$N将手中的$n插回腰间。\n");
        }
        init_blade(3);
        setup();
}
