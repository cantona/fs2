#include <weapon.h>

inherit WHIP;

void create()
{
        set_name("鞭子",({"whip"}));
        set_weight(100);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit","条");
          	set("value",100);
                set("material","iron");
                set("rigidity",50);
                set("long",
        "一条随处可见的鞭子。\n");
        }
        init_whip(10);
        setup();
}