// Qc by anmy (98/3/3)
#include <armor.h>
#include <ansi.h>
inherit WAIST;
void create()
{
    set_name("青牛筋带", ({"buffalo_belt","belt"}) );
    set_weight(1000);
     if ( clonep() )
              set_default_object(__FILE__);
     else {
            set("unit", "付");
            set("material", "leather");
            set("value", 20000);
            set("long","为青牛之筋所制。\n");
// Swy QC 98/3/16
            set("armor_prop/dodge",2);
            set("armor_prop/armor",2);
 }
            setup();
}
