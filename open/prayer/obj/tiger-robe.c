#include <ansi.h>

inherit EQUIP;

void create()
{
        set_name("虎之拳法衣",({"tiger-robe","robe"}) );
        set_weight(9000);
        if( clonep() )
                set_default_object(__FILE__);
else    {
        set("meterial","fur");
        set("unit","件");
        set("value", 6000);
        set("armor_type","cloth");
        set("wear_msg","$N穿上了$n之后,全身长出了如邪虎一般的毛发,此时只见$N逐渐变成了邪恶的战士\n");
        set("remove_msg","$N除下了$n之后,毛发一片片地掉落下来,$N气喘嘘嘘,看来极端的疲惫......\n");
        set("armor_prop/armor", 14);
        set("long","
由破邪洞窟中特有的邪虎虎皮所制成.衣服的前后均绣有圣火教的圣火图样,
是圣火教教中总管级以上的人物的象征。\n");
        }
         setup();
}





