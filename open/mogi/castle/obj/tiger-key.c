
inherit ITEM;
#include <ansi.h>
void create()
{
        set_name(HIW"白虎之钥"NOR, ({ "tigerkey","key" }) );
        set("long", "一把神秘的钥匙。\n");
        set("unit", "把");
        set_weight(800);
        set("no_drop",1);
        set("value", 0);
}
