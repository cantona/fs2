//虹晶双翼铠---2000.4.3 by dhk
#include <armor.h>
#include <ansi.h>
inherit EQUIP;


void create()
{
        set_name(HIC"虹晶双翼铠"NOR,({"diamond armor","armor"}) );
            set_weight(10000);
        set("no_sell",1);
        set("no_auc",1);
        set("no_drop",1); 
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","
一件由北胜天使用＂虹晶″特异矿石铸成，表面散发着特异的红光，是万年的宝物。
\n");
        set("unit", "套");
        set("value",2000000);
        set("armor_type","cloth");
        set("material","crimsonsteel");
            set("armor_prop/armor",40);
            set("armor_prop/stabber",7);
        set("armor_prop/parry",7);
set("wear_msg", HIY"$N穿上$n"HIY"，光芒一闪火红色的异光已将$N的四周护住\n"NOR);
set("unequip_msg", HIY"$N将$n"HIY"卸了下来，四周的火光也慢慢离散开来了。\n"NOR);
        }
        setup();
}

