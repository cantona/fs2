// green_whip.c
#include <weapon.h>

inherit WHIP;

void create()
{
        set_name("青龙鞭",({"green whip","whip"}));
        set_weight(3000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit","条");
                set("value",3000);
                set("material","ironsteel");
		set("rigidity",40);
                set("long",
        "这条鞭子成现碧绿色，握柄上有一只龙头。\n");
        }
        init_whip(60);
        setup();
}
