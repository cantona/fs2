#include <ansi.h>
inherit ITEM;
void create()
{
        set_name(HIR"血淋淋的心脏"NOR, ({ "heart" }));
        set_weight(5000);
        if( clonep() )
        set_default_object(__FILE__);
        else {
        set("unit", "个");
        set("long","血魔转世所需要的心脏。\n");
   set("no_drop", 1);
   set("no_auc", 1);
        set("value", 0);
        }
}
