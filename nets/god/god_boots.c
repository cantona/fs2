#include <armor.h>
#include <ansi.h>
inherit BOOTS;
void create()
{
set_name(""HIW"□HIC"l"HIW"□HIM"□HIW"□HIB"□HIW"□HIY"u"NOR"",({"Sun_shoes","shoes"}));
     set_weight(2400);
        if( clonep() )
                set_default_object(__FILE__);
        else {
set("long","此战靴拥有能追上太阳的能力 , 穿上它后 , 能让你的速度大增\n");
               set("unit","件");
                set("no_sell",1);
   set("no_get",1);
                set("no_give", 1);
                set("no_auc",1);
                set("no_drop",1);
                set("no_put",1);
               set("material","leather");
                set("armor_prop/armor",15);
                set("armor_prop/move",10);
                set("armor_prop/dodge",10);
set("wear_msg","$N穿上$n，$n和太阳产生了共鸣 . \n");
 }
        setup();
}
