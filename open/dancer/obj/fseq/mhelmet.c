// 网聚奖品by cgy(22/10/00)
#include <armor.h>
#include <ansi.h>
inherit HEAD;
object me=this_player();
void create()
{
        set_name(HIG"咕哩咕哩猫防雷盔"NOR, ({"Konn_helmet", "helmet"}));
        set_weight(2000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("unit", "顶");
        set("value", 0);
        set("material", "steel");
        set("long","这是一件咕哩咕哩猫赐与的头盔，拥有防雷的功能。\n");
        set("armor_prop/armor", 14);
        set("no_auc",1);
        set("no_sell",1);
        set("no_give",1);
        set("no_put",1);
        set("no_drop",1);
        set("no_get",1);
        set("thunder",100);
        set("wear_msg", "$N将$n往头上一戴，瞬时$n接受咕哩咕哩猫的保护，使雷击不敢靠近。\n");
		set("remove_msg", "$N将$n脱掉，天上召来一道闪电, 把$N化为灰烬.。\n");
        }
        setup();
if(me->query("class")=="blademan")  this_object()->set("armor_prop/blade", 5);
if(me->query("class")=="fighter")   this_object()->set("armor_prop/unarmed",5);
if(me->query("class")=="swordsman") this_object()->set("armor_prop/sword",5);
if(me->query("class")=="scholar")   this_object()->set("armor_prop/stabber",5);
if(me->query("class")=="bandit")    this_object()->set("armor_prop/unarmed",5);
        this_object()->set("armor_prop/dodge", 5);
        this_object()->set("armor_prop/parry", 5);
        this_object()->set("armor_prop/move", 5);
        this_object()->set("armor_prop/force",3);
}
