#include <ansi.h>
#include <armor.h>
inherit EQUIP;
void create()
{
set_name("[1;37m□[0;37mg[1;37m□[0;37m□[1;37m□[0;37m□[1;37m□[0;37m□[0m",({"wind legging","legging"}));
   set_weight(1000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
   set("long","这是一件由天上诸神使用风岩石所打造的护膝。\n");
   set("wear_msg", "$N将$n绑上，"HIW"狂风战膝"NOR"的发出的光芒注入$N身中。\n");
   set("unequip_msg", "$N将$n取下，"HIW"狂风战膝"NOR"的光芒力量随之逝去。\n");
        set("unit","件");
        set("value",70000);
        set("material","cloth");
        set("armor_type","leggings");
        set("armor_prop/armor",6);
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
