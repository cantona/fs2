#include <ansi.h>
inherit EQUIP;
void create()
{
 set_name("星灭手套",({"starhands","starhands"}));
        set_weight(1000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","星石的制成的手套 , 能大量提高本身的破坏力");
        set("unit", "双");
        set("value",4000);
        set("material","cloth");
        set("armor_type", "hands");
	set("armor_prop/armor",4);
        set("armor_prop/attack",2);
        set("armor_prop/parry",2);
        }
        setup();
}

