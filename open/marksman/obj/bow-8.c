#include <weapon.h>
#include <ansi.h>

inherit BOW;

void create()
{

set_name("磐古弓",({"old bow","bow"}));
        set_weight(100);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("unit", "把");
        set("long","一把传说由磐古之肋骨变化而来的弓。\n");
   
set("material","steel");
        }
        init_bow(40);
set("value",0);
        setup();
}

   

