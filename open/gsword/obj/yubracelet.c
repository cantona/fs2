#include <ansi.h>
inherit EQUIP;
void create()
{
    set_name("珍珠手链" , ({"bracelet"}) );
     set_weight(200);
     if ( clonep() )
              set_default_object(__FILE__);
     else {
            set("long", "一副由珍珠串成的闪闪发光的手链。\n");
            set("unit", "串");
            set("armor_type", "wrists");
            set("value", 10000);
            set("armor_prop/dodge",1);
            set("armor_prop/parry",3); 
            set("armor_prop/armor",4);
            set("wear_msg", "$N把$n带在手上。\n");
     }
}
