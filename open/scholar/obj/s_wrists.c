#include <ansi.h>
#include <armor.h>
inherit WRISTS;
void create()
{
     set_name("紫金手链" , ({"gold_bracelet","bracelet"}) );
     set_weight(2000);
     if ( clonep() )
              set_default_object(__FILE__);
     else {
            set("unit", "串");
            set("value", 6000);
            set("long","乃利用紫金打造而成。\n");
// Swy QC 98/3/16
            set("armor_prop/stabber",2);
            set("armor_prop/literate",2);
            set("armor_prop/armor",3);
     }
            setup();
}
