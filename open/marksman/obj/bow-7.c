#include <weapon.h>
#include <ansi.h>

inherit BOW;

void create()
{

set_name("紫虹弓",({"rain bow","bow"}));
        set_weight(100);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("unit", "把");
        set("long","一把在光线照射之下,散发着紫虹色调的弓。\n");
set("material","copper");
        }
        init_bow(35);
set("value",0);
        setup();
}

   

