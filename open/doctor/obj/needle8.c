// ice-needle.c
#include <ansi.h>
#include <weapon.h>
inherit STABBER;
void create()
{
        set_name(HIW "冰蚕寒丝针" NOR,({"ice needle","needle"}));
        set_weight(100);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "支");
                set("long", "冰蚕寒丝针乃棌天山冰蚕所吐丝而编织，其丝强韧，冰冷，需有深厚的内力方可持有！\n");
                set("value",50000);
                set("rigidity", 30);
                set("material", "crimsonsteel");
                set("wield_msg", "$N伸手往针袋一掏，忽然一支$n掐在手指间！\n");
                set("unwield_msg", "$N将手中的$n插入针袋中。\n");
        }
        init_stabber(80);
        setup();
}


