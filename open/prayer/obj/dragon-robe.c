#include <ansi.h>

inherit EQUIP;

void create()
{
        set_name("龙之拳法衣",({"dragon-robe","robe"}) );
        set_weight(13000);
        if( clonep() )
                set_default_object(__FILE__);
else    {
        set("meterial","silk");
        set("unit","件");
        set("value", 60000);
        set("wear_msg","$N穿上了$n之后,呼的一声,整个人如同是[33m黄甲金龙[0m般,睦地[33m暴出金光[0m!!
            只觉得似乎承继了金龙凶猛的力量!!\n");
        set("remove_msg","$N除下了$n之后,那金光便逐渐地消失在拳法衣的四周......\n");
        set("armor_type","cloth");
        set("armor_prop/armor", 18);
        set("armor_prop/dodge", -3);
        set("armor_prop/unarmed", 10);
        set("armor_prop/stick", 10);
        set("armor_prop/force", 3);
        set("long","
西域特殊的织料与黄甲金龙的龙皮混织而成,衣服的前面绣有圣火教的
圣火图样,后面则是红线所绣出来的龙腾,是象征圣火教长老们高高在上
的权势。\n");
        }
         setup();
}





