#include <weapon.h>

inherit SWORD;

void create()
{
        set_name("不拘剑", ({ "wide sword","sword" }));
        set_weight(11000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "把");
                set("long", "
一把沈重的剑，剑刃宽而厚实，上面还带着斑斑殷红的血迹。\n");
                set("value", 1500);
                set("material", "ironsteel");
                set("wield_msg", "$N从剑鞘中抽出$n握在手中.\n");
                set("unwield_msg", "$N将手中的$n插回剑鞘.\n");
        }
	init_sword(60);
        setup();
}
