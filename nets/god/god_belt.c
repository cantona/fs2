#include <armor.h>
#include <ansi.h>
inherit WAIST;
void create()
{
set_name(""HIR"□HIW"m"HIG"□HIW"i"HIR"□HIW"y"HIG"□HIW"a"NOR"",({"rainbow_belt","belt"}));
             set_weight(2000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("long","上面纹着七彩颜色 , 正散发着无比的光芒。\n");
              set("unit","件");
                set("no_sell",1);
   set("no_get",1);
                set("no_give", 1);
                set("no_auc",1);
                set("no_drop",1);
                set("no_put",1);
                set("material","gem");
                set("armor_prop/armor",15);
                set("armor_prop/parry",5);
                set("armor_prop/dodge",5);
                set("armor_prop/move",5);
                set("wear_msg","$N装备起$n，$N的身边随之幻化出好几道彩虹光芒。\n");
 }
        setup();
}
