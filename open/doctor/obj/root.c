#include <ansi.h>
inherit ITEM;

void create()
{
    set_name(YEL"百年榕树根"NOR, ({"root"}));
    set("long","一根百年榕树根...\n");
    set_weight(10);
    set("unit","根");
    setup();
}
