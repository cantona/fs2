//焚天魔王 eq
inherit EQUIP;
#include <ansi.h>
void create()
{
set_name("[1;37m□[0;37mg[1;37m□[0;37m□[1;37m□[0;37my[1;37m□[0;37ma[0m" , ({"wind belt","belt"}));
         set_weight(300);
        set("no_sell",1);
        set("no_auc",1);
        set("no_drop",1);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "件");
                set("value", 70000);
                set("material","leather");
                set("armor_type", "waist");
                set("armor_prop/armor",7);
                set("armor_prop/stabber",3);
   set("long","这是一件由天上诸神使用风岩石所打造的腰带。\n");
   set("wear_msg", "$N将$n束上，"HIW"狂风腰带"NOR"的发出的光芒注入$N身中。\n");
   set("unequip_msg", "$N将$n脱掉，"HIW"狂风腰带"NOR"的光芒力量随之逝去。\n");
                setup();
        }
}

int query_autoload()
{
 return 1;
}
