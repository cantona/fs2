//虹晶鈗铖腰带---2000.4.3 by dhk
#include <ansi.h>
inherit EQUIP;


void create()
{
        set_name(HIY"虹晶鈗铖腰带"NOR,({"diamond belt","belt"}) );
            set_weight(500);
        set("no_sell",1);
        set("no_auc",1);
        set("no_drop",1); 
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","
一件由北胜天使用＂虹晶″特异矿石铸成，表面散发着特异的金光，是万年的宝物。
\n");
        set("unit", "条");
        set("value",740000);
        set("armor_type","waist");
        set("material","lether");
            set("armor_prop/armor",5);
            set("armor_prop/cure",15);
        set("armor_prop/stabber",10);
        set("wear_msg", ""HIR"$N穿上$n"HIR"，腰带四周特有的异光瞬间消失。\n"NOR);
set("unequip_msg", ""HIR"$N将$n"HIR"解了下来，腰带四周特有的异光再度明亮了起来。\n"NOR);
        }
        setup();
}

