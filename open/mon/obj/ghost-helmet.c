#include <armor.h>
#include <ansi.h>
inherit HEAD;

void create()
{
                set_name(HIY"妖幻头带"NOR, ({"ghost helmet", "helmet"}));
                set_weight(50);
                if( clonep() )
                set_default_object(__FILE__);
                else {
                set("long", "千年树妖－舞风扬所拥有，戴在头上你的身子只感到一阵轻飘飘的。\n");
                set("unit", "顶");
                set("value", 1000000);
                set("material", "steel");
                set("armor_prop/armor", 10);
                set("armor_prop/dodge", 5);
                set("armor_prop/parry", 5);
                set("armor_prop/unarmed", 5);
                set("armor_prop/force", 10);
                set("thunder", 100);
                set("wear_msg", HIW"轻风细雨之中，$n"HIW"戴在$N头上散发出一股暖暖的热流。\n"NOR);
                set("unequip_msg", HIW"$N轻轻的卸下$n"HIW"，所产生的暖流也瞬间消散无踪。\n"NOR);
        }
        setup();
}
