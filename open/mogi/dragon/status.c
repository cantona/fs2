//焚天魔王 armor
#include <ansi.h>
inherit ITEM;
void create()
{
set_name("柳淳风的灵位",({"liu"}));
        set_weight(5000);
        if( clonep() )
        set_default_object(__FILE__);
        else {
        set("long","
        一个用木材雕刻成的神像。
\n");
        set("unit", "套");
        set("value",200000);
}
        setup();
}
