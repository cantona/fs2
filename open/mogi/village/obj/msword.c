#include <weapon.h>
#include <ansi.h>

inherit SWORD;

void create()
{
        seteuid(getuid());
        set_name("风妖剑",({"daemon sword","sword"}));
        set_weight(5000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "把");
                set("value",30000);
                set("material", "steel");
                set("wield_msg", "拿着$n,$N觉的浑身充满了妖力.\n");
                set("unwield_msg", "$N将手中的$n插入腰间的剑鞘。\n");
        }
        init_sword(40);
        setup();
}
                                                                        
