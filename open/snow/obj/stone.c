inherit ITEM;
#include <ansi.h>
void create()
{
    set_name(HIC "天邪石" NOR,({"stone"}));
    set("long","一颗奇怪的石头。\n");
    set("unit","颗");
    set("quest_stone",1);
     set("value",10000);
        setup();
}
