#include <ansi.h>
inherit ITEM;
void create()
{
        set_name(HIR"金法珠"NOR, ({ "gball" }));
        set_weight(5000);
        if( clonep() )
        set_default_object(__FILE__);
        else {
        set("unit", "个");
        set("long","一颗金法珠。\n");
        set("no_drop", 1);
        set("no_auc", 1);
        set("value", 0);
        }
}
