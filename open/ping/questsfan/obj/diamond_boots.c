//虹晶神行靴---2000.4.3 by dhk
#include <ansi.h>
inherit EQUIP;


void create()
{
        set_name(WHT"虹晶神行靴"NOR,({"diamond boots","boots"}) );
            set_weight(1000);
        set("no_sell",1);
        set("no_auc",1);
        set("no_drop",1); 
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","
一件由北胜天使用＂虹晶″特异矿石铸成，表面散发着特异的白光，是万年的宝物。
\n");
        set("unit", "双");
        set("value",910000);
        set("armor_type","boots");
        set("material","lether");
            set("armor_prop/armor",5);
            set("armor_prop/literate",10);
        set("armor_prop/move",7);
        set("armor_prop/dodge",7);
set("wear_msg", HIC"$N穿上$n"HIC"，周围的白光渐渐起了一层云雾，慢慢的把$N托了起来。\n"NOR);
set("unequip_msg", HIC"$N将$n"HIC"脱了下来，云雾又化成白光$N缓缓的回到地面上。\n");
        }
        setup();
}

