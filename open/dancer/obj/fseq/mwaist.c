// 网聚奖品by cgy(22/10/00)
#include <armor.h>
#include <ansi.h>
inherit WAIST;
object me=this_player();
void create()
{
    set_name(HIM"小笨笨的蛋蛋腰带"NOR, ({"Acelan_belt","belt"}) );
    set_weight(1000);
     if ( clonep() )
              set_default_object(__FILE__);
     else {
            set("unit", "付");
            set("material", "steel");
            set("value", 0);
            set("long","绣工精细的腰带，上面泛着蛋形状的萤光图案。\n");
        set("no_auc",1);
        set("no_sell",1);
        set("no_give",1);
        set("no_put",1);
        set("no_drop",1);
        set("no_get",1);
            set("wear_msg", "$N将$n往腰一绑，灵性好像增加不少。\n");
			set("wear_msg", "$N脱下了$n，仿佛张大了嘴巴, 僵立在一旁。\n");
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
