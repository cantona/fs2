#include <ansi.h>

inherit EQUIP;

void create()
{
        set_name("风之盾牌",({"wind-shield","shield"}) );
        set_weight(11500);
        if( clonep() )
                set_default_object(__FILE__);
else    {
        set("meterial","iron");
        set("unit","面");
        set("value", 2000);
        set("armor_type","shield");
        set("armor_prop/armor", 1);
        set("long","
由铁打造而成的盾牌. 牌面刻有圣火教的圣火图样, 圣火教教众的防具。\n");
        }
         setup();
}





