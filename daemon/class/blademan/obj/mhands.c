// Qc by anmy (98/3/3)
#include <ansi.h>
#include <armor.h>
inherit HANDS;
object me=this_player();
void create()
{
        set_name(HIB"魔龙手甲"NOR,({"mdragon hands","hands"}));
        set_weight(2000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("unit", "双");
        set("value",0);
        set("long","为魔龙皮革所制。\n");
set("wear_msg","$N戴上$n，顿时力量增强数倍。\n");
        set("material","steel");
        set("armor_prop/armor", 9);
        set("no_auc",1);
        set("no_sell",1);
        set("no_give",1);
        set("no_put",1);
        set("no_drop",1);
        set("no_get",1);
        }
        setup();
if(me->query("class")=="blademan")  this_object()->set("armor_prop/blade", 5);
if(me->query("class")=="fighter")   this_object()->set("armor_prop/unarmed",5);
if(me->query("class")=="swordsman") this_object()->set("armor_prop/sword",5);
if(me->query("class")=="scholar")   this_object()->set("armor_prop/stabber",5);
if(me->query("class")=="bandit")    this_object()->set("armor_prop/unarmed",5);
        this_object()->set("armor_prop/attack", 5);
        this_object()->set("armor_prop/dodge",4);
        this_object()->set("armor_prop/parry",4);
        this_object()->set("armor_prop/move",4);
        this_object()->set("armor_prop/force",3);
}

