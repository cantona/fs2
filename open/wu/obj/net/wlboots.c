inherit EQUIP;
#include <ansi.h>
#include <armor.h>
void create()
{
set_name("[1;37m□[0;37mg[1;37m□[0;37m□[1;37m□[0;37m□[1;37m□[0;37mu[0m" , ({"wind boots","boots"}));
         set_weight(5000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("unit", "双");
        set("value",110000);
        set("material","cloth");
        set("armor_type", "boots");
          set("armor_prop/armor",6);
   set("long","这是一件由天上诸神使用风岩石所打造的战靴。\n");
   set("wear_msg", "$N将$n穿上，"HIW"狂风战靴"NOR"的发出的光芒注入$N身中。\n");
   set("unequip_msg", "$N将$n脱掉，"HIW"狂风战靴"NOR"的光芒力量随之逝去。\n");
   set("armor_prop/stabber",2);
        set("no_sell",1);
        set("no_auc",1);
        set("no_drop",1);
        }
        setup();
}
int query_autoload()
{
 return 1;
}
