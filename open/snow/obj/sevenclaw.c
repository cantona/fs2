// fusword.c
#include <weapon.h>
#include <ansi.h>

inherit UNARMED;

void create()
{
        seteuid(getuid());
set_name(HIB"七步摄魂爪"NOR,({"seven claw","claw"}));
set_weight(5000);

        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "把");
set("long","这把武器是心玄老师经过二十年精心制做,所含的威力只有本人能完全发挥。\n");

                set("value",10000);
            set("rigidity",100);
                set("material", "crimsonsteel");
set("wield_msg","$N装备起$n．．突然间激起$N高昂斗志!!");
        }
        init_unarmed(30);
        setup();
}
