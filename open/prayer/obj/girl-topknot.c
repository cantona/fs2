#include <ansi.h>

inherit EQUIP;

void create()
{
        set_name("碧玉钗",({"girl-topknot","topknot"}) );
        set_weight(700);
        if( clonep() )
                set_default_object(__FILE__);
else    {
        set("meterial","gem");
        set("unit","件");
        set("value", 10000);
        set("armor_type","head");
        set("armor_prop/armor", 4);
        set("long","
西域翠玉制成，是女性的装饰品同时也是防护用具。\n");
        }
         setup();
}





