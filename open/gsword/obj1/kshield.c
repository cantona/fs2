#include <armor.h>
#include <ansi.h>
inherit SHIELD;
object me=this_player();
void create()
{
        set_name(HIY"圣者之盾"NOR,({"kensai shield","shield"}));
        set_weight(2000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","由大剑师所造以不知名材料所造之圣防具,,对剑客拥有莫名的影响力。\n");
        set("wear_msg","[1;32m$N装备上$n[1;32m后，顿时觉的有很强的防护力。[0m\n");
        set("unit","件");
        set("value",0);
        set("material","blacksteel");
        set("no_auc",1);
        set("no_sell",1);
        set("no_give",1);
        set("no_put",1);
        set("no_drop",1);
        set("no_get",1);
        }
        setup();
        this_object()->set("armor_prop/sword",8);
        this_object()->set("armor_prop/armor",12);
        this_object()->set("armor_prop/parry",10);
        this_object()->set("armor_prop/force",10);
}
