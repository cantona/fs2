// Qc by anmy (98/3/3)
#include <armor.h>
#include <ansi.h>
inherit WAIST;
object me=this_player();
void create()
{
    set_name(HIB"魔龙筋带"NOR, ({"mdragon belt","belt"}) );
    set_weight(1000);
     if ( clonep() )
              set_default_object(__FILE__);
     else {
            set("unit", "付");
            set("material", "steel");
            set("value", 0);
            set("long","为魔龙筋所制。\n");
        set("no_auc",1);
        set("no_sell",1);
        set("no_give",1);
        set("no_put",1);
        set("no_drop",1);
        set("no_get",1);
            set("wear_msg", "$N把$n系在腰上，一股邪恶之气涌上心头。\n");
     }
            setup();
if(me->query("class")=="blademan")  this_object()->set("armor_prop/blade", 5);
if(me->query("class")=="fighter")   this_object()->set("armor_prop/unarmed",5);
if(me->query("class")=="swordsman") this_object()->set("armor_prop/sword",5);
if(me->query("class")=="scholar")   this_object()->set("armor_prop/stabber",5);
if(me->query("class")=="bandit")    this_object()->set("armor_prop/unarmed",5);
            this_object()->set("armor_prop/dodge",5);
            this_object()->set("armor_prop/attack",5);
            this_object()->set("armor_prop/armor",9);
            this_object()->set("armor_prop/force",2);
}
