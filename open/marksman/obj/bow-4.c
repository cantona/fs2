#include <weapon.h>
#include <ansi.h>

inherit BOW;

void create()
{

set_name("玄武弓",({"force bow","bow"}));
        set_weight(100);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("unit", "把");
set("value",0);
        set("long","一把由玄武矿所打造出的弓。\n");
set("material","iron");
        }
//init_bow(20)
init_bow(5);
        setup();
}

   

