#include <weapon.h>
#include <ansi.h>

inherit BOW;

void create()
{

        set_name("白铁弓", ({ "bow" }) );
        set_weight(100);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("unit", "把");
        set("long","一把由白铁矿所打造而成的弓。\n");
        set("value", 0);
        set("material", "wood");
        }
        init_bow(5);
        setup();
}
