#include <ansi.h>

inherit EQUIP;

void create()
{
        set_name(HIB"修罗战斗服"NOR,({"fiend cloth","cloth"}) );
        set_weight(15000);
        if( clonep() )
                set_default_object(__FILE__);
else    {
        set("meterial","silk");
        set("unit","件");
        set("value", 10000);
        set("armor_type","cloth");
        set("wear_msg",HIC"$N穿上了$n之后,全身散发出雄浑的斗气!!\n"NOR);
        set("remove_msg",HIC"$N将$n脱下之后,雄浑的斗气慢慢地消散了!!\n"NOR);
        set("armor_prop/armor", 15);
        set("armor_prop/dodge", 5);
        set("armor_prop/unarmed", 10);
        set("armor_prop/force", 2);
        set("long","
冥殿修罗专用的战斗服，以神兽金.木.水.火.土麒麟之鳞皮精炼混织而成。
刀枪不入,水火不侵。\n");
        }
         setup();
}


