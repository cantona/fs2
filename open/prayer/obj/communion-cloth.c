#include <ansi.h>

inherit EQUIP;

void create()
{
        set_name("圣火教便服",({"communion-cloth","cloth"}) );
        set_weight(500);
        if( clonep() )
                set_default_object(__FILE__);
else    {
        set("meterial","silk");
        set("unit","件");
        set("value", 100);
        set("armor_type","cloth");
        set("armor_prop/armor", 2);
        set("long","
由西域布料简单缝制而成.衣服的前后均绣有圣火教的圣火图样,
圣火教教众的基本服装。\n");
        }
         setup();
}





