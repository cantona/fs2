inherit EQUIP;
#include <ansi.h>

void create()
{
        set_name(HIW"冰蚕寒丝袍"NOR,({"cold cloth","cloth"}) );
        set_weight(3000);
        set("gender_only", "女性");
                if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","一件雪白的袍服 ,被一股奇特的寒气所笼罩 ,
据说是以万年冰蚕丝缝制而成。\n");
        set("unit", "套");
        set("value",10000);
        set("material","cloth");
        set("armor_type", "cloth");
        set("armor_prop/armor",50 );
        set("armor_prop/poison",5 );
        set("wear_msg","$N穿上$n ,一股寒气迅速的爬满$N全身 ,看起来神秘而美丽 .\n");
        set("remove_msg","$N脱下了$n ,寒气慢慢的消退 ,露出本来的面目 .\n");
        }
        setup();
}
