// Qc by anmy (98/3/3)
#include <armor.h>
#include <ansi.h>
inherit HEAD;
object me=this_player();
void create()
{
        set_name(HIB"魔龙头盔"NOR, ({"mdragon helmet", "helmet"}));
        set_weight(2000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("unit", "顶");
        set("value", 0);
        set("material", "steel");
        set("long","这是用魔龙皮革所制，传说有避雷效果。\n");
        set("armor_prop/armor", 14);
        set("no_auc",1);
        set("no_sell",1);
        set("no_give",1);
        set("no_put",1);
        set("no_drop",1);
        set("no_get",1);
        set("thunder",100);
        set("wear_msg", "$N将$n戴上，一股血腥尤然而生。\n");
        }
        setup();
if(me->query("class")=="blademan")  this_object()->set("armor_prop/blade", 5);
if(me->query("class")=="fighter")   this_object()->set("armor_prop/unarmed",5);
if(me->query("class")=="swordsman") this_object()->set("armor_prop/sword",5);
if(me->query("class")=="scholar")   this_object()->set("armor_prop/stabber",5);
if(me->query("class")=="bandit")    this_object()->set("armor_prop/unarmed",5);
        this_object()->set("armor_prop/dodge", 4);
        this_object()->set("armor_prop/parry", 4);
        this_object()->set("armor_prop/move", 4);
        this_object()->set("armor_prop/force",2);
}
