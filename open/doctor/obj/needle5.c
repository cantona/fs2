#include <ansi.h>
#include <weapon.h>
inherit STABBER;
void create()
{
        set_name("雪鲤银针",({"li needle","needle"}));
        set_weight(2000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long", "雪鲤银针是从天山冰河中的雪鲤身上的鳞片所炼制。/n");
                set("unit", "支");
                set("value",1000);
                set("rigidity", 30);
                set("material", "ironsteel");
                set("wield_msg", "$N伸手往针袋一掏，忽然一支$n掐在手指间！\n");
                set("unwield_msg", "$N将手中的$n插入针袋中。\n");
        }
        init_stabber(50);
        setup();
}


