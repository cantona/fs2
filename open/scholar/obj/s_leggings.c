#include <ansi.h>
#include <armor.h>
inherit LEGGINGS;
void create()
{
        set_name("玄武胫甲",({"turtle_legging","legging"}));
        set_weight(3000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("unit","件");
        set("value",3000);
        set("material","steel");
        set("long","为玄武之甲壳制成，具有很高的防护。\n");
// Swy QC 98/3/16
        set("armor_prop/armor", 3);
        set("armor_prop/parry",2);
        set("armor_prop/stabber",2);
        }
        setup();
}

