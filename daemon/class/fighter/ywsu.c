#include <ansi.h>
#include <armor.h>
inherit EQUIP;

void create()
{
        set_name("[1;31m□[1;33m□[1;31m□[1;33m□[1;31m□[1;33m□[1;31m□[1;33m□[0m",({"gold surcoat","surcoat"}));
        set_weight(10000);
        set("armor_type","cape");
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("unit", "件");
        set("material","leather");
        set("value",100000);
   set("long",HIW"这是一件由传说中玄天玉加上金镂线所编成的披风。\n"NOR);
   set("wear_msg", "$N将$n披上，"HIY"金镂披风"NOR"的神的力量贯注在$N身中，使$N信心倍增。\n");
   set("unequip_msg", "$N将$n除去，"HIY"金镂披风"NOR"的力量随之消逝。\n");
           set("armor_prop/armor",6);
   set("armor_prop/parry",3);
        }
        setup();
}
