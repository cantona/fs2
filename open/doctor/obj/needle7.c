#include <ansi.h>
#include <weapon.h>
inherit STABBER;
void create()
{
        set_name("紫竹针",({"chu needle","needle"}) );
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("long", "紫竹针乃取南海紫竹所制，具有疗伤功能！拿在手上不禁想到满身罪恶怎配得上使用此针！\n");
                set("unit", "支");
                set("value",500);
                set("material", "steel");
                set("wield_msg", "$N伸手往针袋一掏，忽然一支$n掐在手指间！\n");
                set("unwield_msg", "$N将手中的$n插入针袋中。\n");
        }
init_stabber(70);
        setup();
}

