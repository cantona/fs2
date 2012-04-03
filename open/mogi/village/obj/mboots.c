#include <weapon.h>
#include <ansi.h>

inherit EQUIP;

void create()
{
        set_name("魔步靴",({"daemon boots" ,"boots"}));
        set_weight(2000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("long","风魔遗留的靴子.\n");
                set("unit", "件");
                set("value", 3000);
                set("armor_type", "boots");
                set("armor_prop/armor",15);
        }
        setup();
}
