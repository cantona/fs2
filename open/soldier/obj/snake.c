
#include <weapon.h>
#include <ansi.h>
inherit LANCE;
void create()
{
        seteuid(getuid());
set_name("蛇戟",({"snake lance","lance"}));
        set_weight(4000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "把");
    set("long","这支枪尖有点像蛇一样的扭曲.\n");
                set("value",5500);
                set("material", "steel");
        set("wield_msg", "$N装备起来觉的手感感觉的特好的。\n");
         }
        init_lance(25);
        setup();
}

