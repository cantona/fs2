#include <weapon.h>
#include <ansi.h>

inherit BOW;

void create()
{

set_name("七星弓",({"star bow","bow"}));
        set_weight(100);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("unit", "把");
        set("long","一把上面刻画有北斗七星的弓。\n");
set("material","copper");
        }
        init_bow(30);
set("value",0);
        setup();
}
