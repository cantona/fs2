
#include <ansi.h>
#include <armor.h>
inherit CAPE;
object me=this_player();
void create()
{
        set_name(HIY"剑圣披肩"NOR,({"kensai cloak","cloak"}));
        set_weight(2000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "件");
        set("value",0);
        set("material","linen");
        set("long","与一般披肩不同.为使剑客拥有更强的行动力..故大龙铁心在制做时采用轻薄设计使剑圣用起来得心顺手。\n");
set("wear_msg","[1;31m穿上$n[1;31m，$N的行动越来越顺畅。[0m\n");
        set("no_auc",1);
        set("no_give",1);
        set("no_sell",1);
        set("no_put",1);
        set("no_drop",1);
        set("no_get",1);
        }
        setup();
        this_object()->set("armor_prop/sword",5);
        this_object()->set("armor_prop/armor",5);
        this_object()->set("armor_prop/parry",5);
        this_object()->set("armor_prop/dodge",5);
        this_object()->set("armor_prop/move",5);

}
