
#include <weapon.h>
#include <ansi.h>
inherit LANCE;
void create()
{
        seteuid(getuid());
set_name("木枪",({"wood-lance","lance"}));
        set_weight(1500);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "把");
    set("long","这是一支纯木所制的枪,勉强用吧!!\n");
                set("value",2000);
                set("material", "wood");
 }
        init_lance(10);
        setup();
}

