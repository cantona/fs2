// 网聚奖品by cgy(22/10/00)
#include <armor.h>
#include <ansi.h>
inherit BOOTS;
object me=this_player();
void create()
{
        set_name(HIR"暴走中兀儿德神靴" NOR,({"Urd_shoes","boots"}) );
        set_weight(2000);
        if ( clonep() )
                set_default_object(__FILE__);
        else{
                set("unit","双");
                set("value",0);
                set("armor_prop/armor",10);
                set("armor_prop/dodge",10);
        set("no_auc",1);
        set("no_sell",1);
        set("no_give",1);
        set("no_put",1);
        set("no_drop",1);
        set("no_get",1);
                set("armor_prop/move",10);
                set("armor_prop/force",3);
                set("material","steel");
                set("long","这是一双兀儿德赐予的靴子，能让你的速度大增。\n");
                set("wear_msg","$N穿上$n感到有如暴走般，行动力好像增加不少。\n");
				set("remove_msg","$N脱下了$n，慢慢地挥动双脚... 哇... 怎么这么慢!\n");
                setup();
        }
}
