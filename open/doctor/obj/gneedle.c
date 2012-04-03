#include <weapon.h>
#include <ansi.h>
inherit STABBER;

void create()
{
    set_name(HIR"赤焰绝炎"HIW"针"NOR, ({"fire needle", "fire needle"}) );
    set_weight(5500);
    if( clonep() )
    set_default_object(__FILE__);
    else{
    set("unit", "柄");
    set("long","一柄火红的针，据说为太上老君以三昧真火所炼制成的火针！\n");
    set("wield_msg", "$N握起手中的$n，一股"HIR"赤焰之气"NOR"窜入各大穴道，使$N顿时感到全身充满力量！\n");
    set("unwield_msg", "$N放下了手中的$n，"HIR"赤焰之气"NOR"随即从各穴窜出，一时间消逝无踪！\n");
    set("value", 500000);
    set("material", "iron");
}
    init_stabber(80);
    setup();
}