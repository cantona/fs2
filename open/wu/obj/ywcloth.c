#include <ansi.h>
#include <armor.h>
inherit CLOTH;
void create()
{
   set_name("[1;31m□[1;33m□[1;31m□[1;33m□[1;31m□[1;33m□[1;31m□[1;33m□[0m" ,({"gold cloth","cloth"}));
   set_weight(30000);
   if( clonep() )
        set_default_object(__FILE__);
   else {
   set("unit","件");
   set("value",150000);
   set("material", "cloth");
   set("long",HIW"这是一件由传说中玄天玉加上金镂线所编成的宝衣。\n"NOR);
   set("wear_msg", "$N将$n穿上，"HIY"金镂衣"NOR"的力量贯注在$N身中。\n");
   set("unequip_msg", "$N将$n脱掉，"HIY"金镂衣"NOR"的力量随之逝去。\n");
   set("armor_prop/armor",30);
   set("armor_prop/force",3);
   set("armor_prop/unarme",3);
   set("armor_prop/dodge",-5);
}
        setup();
}
