#include <ansi.h>
#include <weapon.h>

inherit WHIP;

void create()
{
        set_name(MAG+"幻"+YEL+"。"+MAG+"鞭"+NOR,({"unreal whip","whip"}));
        set_weight(3000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit","条");
          	set("value",30000);
                set("material","iron");
                set("rigidity",50);
                set("long",
        "这条鞭子只有鞭头有握柄处，其鞭子身长，犹如一阵雾一般，无法看清楚其鞭头在何处。\n");
        }
        init_whip(100);
        setup();
}