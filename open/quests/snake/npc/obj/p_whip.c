#include <weapon.h>
#include <ansi.h>
inherit WHIP;

void create()
{
        set_name(HIC"毒蛇鞭"NOR,({"poison whip","whip"}));
        set_weight(100);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit","条");
          	set("value",5000);
                set("material","iron");
                set("rigidity",70);
                set("long",
        "鞭子以长期浸泡于毒蛇液中的蛇皮编织而成，蛇鞭上还镶上一些毒蛇牙
，毒蛇牙之剧毒以无毒性，不过却会增加鞭子的伤害力。\n");
        }
        init_whip(80);
        setup();
}