#include <armor.h>
#include <ansi.h>
inherit EQUIP;

void create()
{
                set_name(HIY"妖幻披掮"NOR, ({ "ghost cloak" ,"cloak" }) );
                set_weight(50);
                if( clonep() )
                set_default_object(__FILE__);
                else {
                set("long", "千年树妖－舞风扬所拥有，轻轻的披在身上，让你散发着无限魅力。\n");
                set("unit", "件");
                set("value", 300000);
                set("material", "steal");
                set("armor_type", "cape");
                set("armor_prop/armor", 10);
                set("armor_prop/dodge", 5);
                set("armor_prop/parry", 5);
                set("armor_prop/unarmed", 5);
                set("armor_prop/force", 10);
                set("wear_msg", HIW"$N"HIW"轻轻的着起了$n"HIW"，无限的魅力正持续的开始散发。\n"NOR);
                set("unequip_msg", HIW"轻轻的脱下$n"HIW"，$N的魅力正一点一滴的消散。\n"NOR);

                }
                setup();
}

