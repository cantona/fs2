#include <weapon.h>
#include <ansi.h>

inherit BOW;

void create()
{

set_name("玄铁弓",({"steel bow","bow"}));
        set_weight(100);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("unit", "把");
set("value",0);
        set("long","一把由玄铁矿所打造的弓。\n");
set("material","iron");
        }
        init_bow(10);
        setup();
}

   

