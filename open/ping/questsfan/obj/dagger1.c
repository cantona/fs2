//moon dagger by bss (皇室女性用)
#include <weapon.h>
#include <ansi.h>
inherit DAGGER;

void create()
{
        set_name(HIC "沉璧" NOR,({"moon dagger","dagger"}));
        set_weight(800);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "把");
                set("long","这是皇室的祖传兵器，能够完完全全的配合皇室绝学\n
                「飞乱”，是一件不可多得的好兵器。\n");
                set("value",1000);
                set("material", "steel");
        }
        init_dagger(100);
        set("wield_msg", HIY"$N双手忽然一抖，$n就像变魔术般的出现在$N手上。\n"NOR);
        set("unwield_msg",HIY"$N将手一抖，$n便消失了。\n"NOR);
        setup();
}

