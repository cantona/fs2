#include <ansi.h>
inherit EQUIP;
void create()
{
    set_name("逍遥护手" , ({"yau gloves"}) );
     set_weight(900);
     if ( clonep() )
              set_default_object(__FILE__);
     else {
            set("long", "李逍遥所配之护手。\n");
            set("unit", "副");
            set("armor_type", "hands");
            set("value", 30000);
            set("armor_prop/dodge",2);
            set("armor_prop/parry",3); 
            set("armor_prop/armor",4);
            set("wear_msg", "$N把$n带在手上。\n");
     }
}
