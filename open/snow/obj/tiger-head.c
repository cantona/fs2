#include <ansi.h>
inherit ITEM;
void create()
{
        set_name("独角虎的头", ({ "tiger-head" }) );
        set_weight(5000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "个");
                set("long","这是凶残的独角虎的头.\n");
                set("value", 0);
        }
}
