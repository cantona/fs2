#include <weapon.h>
inherit STABBER;
void create()
{
        set_name("枯\骨扇",({"bone fan","fan"}) );
        set_weight(8000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","由枯\骨制成的扇子，正散发着一股哀怨之气。\n");
        set("unit","把");
        set("value", 9000);
        set("material","blacksteel");
        }
        init_stabber(60);
        setup();
}

