// Qc by anmy (98/3/3)
#include <ansi.h>
#include <armor.h>
inherit CAPE;
object me=this_player();
void create()
{
        set_name(HIB"魔龙披甲"NOR,({"mdragon surcoat","surcoat"}));
        set_weight(2000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "件");
        set("value",0);
        set("material","steel");
        set("long","能提高对后心的防护。\n");
set("wear_msg","穿上$n后，$N有如魔龙现世般的威严。\n");
        set("no_auc",1);
        set("no_give",1);
        set("no_sell",1);
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
        this_object()->set("armor_prop/armor",9);
        this_object()->set("armor_prop/parry",5);
        this_object()->set("armor_prop/force",2);
        this_object()->set("armor_prop/dodge",5);
}
