//stone.c 红宝石 解 quests/stone 所需的item  97/11/17 by anmy

#include <weapon.h>
#include <ansi.h>
inherit STABBER;

void create()
{
        set_name(HIR"红宝石"NOR,({"stone"}));
        set_weight(100);
	if( clonep() )
		set_default_object(__FILE__);
	else {
                set("unit", "颗");
                set("long","此宝石据说为洋人所爱用。\n");
                set("value",17500);
		set("material", "steel");
                set("wield_msg", "$N从胸前口袋里拿出一颗$n。\n");
                set("unwield_msg", "$N将$n收进胸前口袋中。\n");
	}
        init_stabber(50);
	setup();
}
int wield()
{
        if((string)this_player()->query("family/family_name") != "儒门")
           return notify_fail("红宝石只有儒家的人能用\n");
        else{
              ::wield();
            }
        return 1;
}
