//虹晶紫裙---2000.4.6 by dhk
#include <weapon.h>
#include <ansi.h>

inherit EQUIP;

void create()
{
        set_name( ""MAG"虹晶紫裙"NOR"" , ({ "diamond skirt" ,"skirt" }) );
        set_weight(1200);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","一件由北胜天使用＂虹晶″特异矿石铸成，表面散发着特异的紫红色的光芒，是万年的宝物。\n");
                set("unit", "件");
                set("no_sell",1);
                set("no_auc",1);
                set("no_drop",1);
set("value", 4000);
                set("material", "diamond");
                set("armor_type", "pants");
            set("armor_prop/armor",8);
set("wear_msg", HIR"$N穿上$n"HIR"，裙摆\缓缓的飘动令$N增添不少天人的丰采。\n"NOR);
        }
        setup();
}

