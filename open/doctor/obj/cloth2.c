#include <ansi.h>
#include <armor.h>
inherit CLOTH;
void create()
{
        set_name(HIW"寒蚕袍"NOR, ({ "ice cloth","cloth"}) );
        set_weight(2000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit","件");
                set("long", "冰蚕寒衣乃棌天山冰蚕所吐丝而编织，其丝强韧，冰冷，需有深厚的内力方可穿着！\n");
                set("material","crimsonsteel");
                set("value",100000);
                  set("armor_prop/armor",20);
                set("armor_prop/dodge",6);
                set("armor_prop/parry",6);
                set("armor_prop/move",5);
                set("armor/type","cloth");
                set("wear_msg", "$N将$n穿在身上，顿时一片寒芒罩住$N！\n");
                set("unwear_msg", "$N将$n脱下缠成一条丝绸系在腰间。\n");
              }

        setup();
}


