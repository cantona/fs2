//虹晶识皇披风---2000.4.6 by dhk
#include <armor.h>
#include <ansi.h>
inherit EQUIP;

void create()
{
        set_name(""HIG"虹晶识皇披风"NOR"",({"diamond cloak","cloak"}) );
        set_weight(600);
        set("no_sell",1);
        set("no_auc",1);
        set("no_drop",1); 
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","一件由北胜天使用＂虹晶″特异矿石铸成，表面散发着特异的绿光，是万年的宝物。\n");
        set("unit", "件");
        set("value",50000);
        set("armor_type","cape");
        set("material","diamond");
            set("armor_prop/armor",5);
            set("armor_prop/unarmed",7);
//        set("armor_prop/parry",7);
set("wear_msg", HIR"$N穿上$n"HIR"，周围的绿光忽明忽暗的，渐渐的将$N的气质改变成皇者般的风范来。\n"NOR);
set("unequip_msg", HIR"$N将$n"HIR"脱了下来，瞬间四周发出一声强烈的音爆。\n");
         }
        setup();
}

