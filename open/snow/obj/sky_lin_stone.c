// Room: /open/snow/obj/sky_lin_stone
// 天灵石
#include <ansi.h>
inherit ITEM;
void create()
{
        set_name(HIM"天灵石"NOR, ({ "sky_lin_stone"}) );
        set_weight(5000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "颗");
                set("long","这是传说中有许多的特异功能的石头.\n");
                set("value", 10000);
             }
      setup();
}

