#include <ansi.h>
#include <weapon.h>
inherit STABBER;
void create()
{
        set_name("竹针" ,({"chhu needle","needle"}));
        set_weight(100);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "支");
                set("long", "竹针是上等竹子削制而成的！\n");
                set("value",50);
                set("material", "iron");
                set("wield_msg", "$N伸手往针袋一掏，忽然一支$n掐在手指间！\n");
                set("unwield_msg", "$N将手中的$n插入针袋中。\n");
        }
        init_stabber(10);
        setup();
}


