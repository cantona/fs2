#include <ansi.h>
#include <armor.h>
inherit HANDS;
object me=this_player();
void create()
{
        set_name(HIY"剑圣护手"NOR,({"kensai hands","hands"}));
        set_weight(2000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("unit", "双");
        set("value",0);
        set("long","为大剑师龙铁心所铸。\n");
set("wear_msg","$N配上$n，[1;35m顿时力量增强数倍。[0m。\n");
        set("material","steel");
        set("armor_prop/armor", 12);
        set("no_auc",1);
        set("no_sell",1);

        set("no_give",1);
        set("no_put",1);
        set("no_drop",1);
        set("no_get",1);
        }
        setup();
this_object()->set("armor_prop/sword",5);
        this_object()->set("armor_prop/attack", 5);
        this_object()->set("armor_prop/dodge",4);
        this_object()->set("armor_prop/parry",5);
        this_object()->set("armor_prop/move",4);
}
