#include <ansi.h>
inherit ITEM;
void create()
{
        set_name(HIR"连阳剑灵珠"NOR, ({ "swordball" }));
        set_weight(5000);
        if( clonep() )
        set_default_object(__FILE__);
        else {
        set("unit", "个");
        set("long","开天三灵器中连阳剑剑灵之灵气珠,似乎具有神奇之功效。\n");
        set("no_drop", 1);
        set("no_auc", 1);
        set("value", 0);
        }
}
