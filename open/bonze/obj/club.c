#include <weapon.h>
 
inherit STICK;
 
void create()
{
        set_name("齐眉棍", ({ "club" }) );
        set_weight(7000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
               set("unit", "根");
               set("long", "这是一把看起相当普通的齐眉棍，看来是少林僧人练武专用的。\n");
               set("value", 400);
               set("material", "steel");
        }
        init_stick(25);
 
        set("wield_msg", "$N大喝一声，把$n握在手中。\n");
        set("unwield_msg", "$N将手中的$n持在背后。\n");
 
 
        setup();
}
