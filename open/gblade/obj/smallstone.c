inherit ITEM;
#include <ansi.h>
void create()
{
    set_name("小石头",({"stone"}));
    set("long","一颗奇怪的石头。\n");
    set("unit","颗");
    set("value",100);
    set("no_get",1);
    set("no_sac",1);
    set("no_auc",1);
    set_weight(500000);
        setup();
}
