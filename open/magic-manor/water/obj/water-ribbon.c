#include <weapon.h>
#include <ansi.h>

inherit UNARMED;

void create()
{
        seteuid(getuid());
        set_name(HIC"水色灵带"NOR,({"water ribbon","ribbon"}));
        set_weight(8000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "条");
                set("long","水渊流所使用的灵带，水光闪闪夺目，令人无法直视。\n");
                set("value",1000000);
                set("material", "gold");
                set("wield_msg", "拿起$n,$N觉得有一股灵光注入了身躯。\n");
                set("unwield_msg", "$N将手中的$n小心的收起。\n");
        }
        init_unarmed(100);

        setup();
}
