// Qc by anmy (98/3/3)
#include <ansi.h>
#include <armor.h>
inherit NECK;
object me=this_player();
void create()
{
     set_name(HIB"魔龙牙坠"NOR , ({"mdragon gem","gem"}) );
     set_weight(1000);
     if ( clonep() )
              set_default_object(__FILE__);
     else {
            set("unit", "条");
            set("value", 0);
            set("material","steel");
            set("long","为魔龙利牙磨制而成。\n");
set("wear_msg","戴上$n后，$N的力量增加了些许。\n");
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
            this_object()->set("armor_prop/parry",5);
            this_object()->set("armor_prop/force",3);
            this_object()->set("armor_prop/attack",5);
            this_object()->set("armor_prop/armor",9);
}

