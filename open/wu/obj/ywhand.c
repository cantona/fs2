inherit EQUIP;
#include <ansi.h>
#include <armor.h>
void create()
{
        set_name("[1;31m□[1;33m□[1;31m□[1;33m□[1;31m□[1;33m@[1;31m□[1;33m□[0m",({"gold hands","hands"}));
        set_weight(500);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long",HIW"这是一件由传说中玄天玉加上金镂线所编成的手套。\n"NOR);
        set("wear_msg", "$N将$n戴上，"HIY"金镂手套"NOR"的力量从手上耀眼光芒。\n");
        set("unequip_msg", "$N将$n脱掉，"HIY"金镂手套"NOR"的力量从手上逝去。\n");
        set("unit", "双");
        set("value",90000);
        set("material","cloth");
        set("armor_type", "hands");
        set("armor_prop/armor",15);
        set("armor_prop/unarme",2);
        set("armor_prop/attack",10);
        }
        setup();
}
