#include <armor.h>

inherit CLOTH;

void create()
{
        set_name("官制长袍", ({ "officer cloth", "cloth" }) );
        set_weight( 500);

        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "袭");
                set("long", "此长袍是官方公制的，看起来还满好看的。\n");

        set("material", "cloth");
                set("value",  200);
                set("armor_prop/armor",  5);
        }
        setup();
}
