#include <ansi.h>
#include <armor.h>
inherit CLOTH;
void create()
{
set_name("[1;33m□[1;37m□[1;33m□[1;37m□[1;33m□[1;37mP[1;33m□[1;37mn[0m",({"purple cloth","cloth"}));
   if( clonep() )
        set_default_object(__FILE__);
   else {
         set("armor_prop/dodge",10);
   set("no_sell",1);
   set("no_auc",1);
   set("no_drop",1);
   set("unit","件");
   set("value",150000);
   set("material", "cloth");
   set("long","这是一件由天上诸神采集先天灵气所炼造而成的仙衣。\n");
   set("unequip_msg", "$N将$n脱掉,$N身上的$n所散发的灵气随之逝去。\n");
   set("wear_msg", "$N将$n穿上，$N身上的$n散发的灵气将$N包围。\n");
   set("armor_prop/armor",22);
}
        setup();
}
int query_autoload()
{
 return 1;
}
