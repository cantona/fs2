#include <ansi.h>

inherit EQUIP;

void create()
{
        set_name("风之拳法衣",({"wind-robe","robe"}) );
        set_weight(8500);
        if( clonep() )
                set_default_object(__FILE__);
else    {
        set("meterial","silk");
        set("unit","件");
        set("value", 3000);
        set("armor_type","cloth");
        set("wear_msg","$N穿上了$n之后,风声大作,四周的气流渐渐聚在你的身上,形成了高压的旋风,保护着$N!!\n");
        set("remove_msg","$N除下了$n之后,旋风逐渐地消散在空气之中......\n");
        set("armor_prop/armor", 10);
        set("long","
由西域毛料所制成.衣服的前后均绣有圣火教的圣火图样,
圣火教教中习武之人均以此为装。\n");
        }
         setup();
}





