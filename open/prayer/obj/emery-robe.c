#include <ansi.h>

inherit EQUIP;

void create()
{
        set_name("金刚拳法衣",({"emery-robe","robe"}) );
        set_weight(11000);
        if( clonep() )
                set_default_object(__FILE__);
else    {
        set("meterial","silk");
        set("unit","件");
        set("value", 10000);
        set("armor_type","cloth");
        set("wear_msg","$N穿上了$n之后,整个人就像是被[30m兽魂附身[0m一样,肌肉暴涨,与怪兽无异....\n");
        set("remove_msg","$N除下了$n之后,全身经脉萎靡不振,面色苍白......\n");
        set("armor_prop/armor", 17);
        set("armor_prop/dodge", 1);
        set("armor_prop/force", 1);
        set("long","
西域特殊的织料加上金刚砂所制成.衣服的前面绣有圣火教的圣火图样,
后面则是蓝线所绣出来的金刚图样,平常都是穿在圣火教各支门的门主
级人物身上。\n");
        }
         setup();
}





