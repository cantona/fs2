#include <ansi.h>
inherit EQUIP;

void create()
{
        set_name(HIR"火眼金睛"NOR,({"fire eye","eye"}) );
        set_weight(2000);
        if (clonep() )
                set_default_object(__FILE__);
        else{
                set("long","
传说此物为当年齐天大圣孙悟空的头饰 ,戴上它后 ,可以放出异彩 ,驱走黑暗。\n");

                set("armor_type","head");
                set("material","blacksteel");
                set("unit","件");
                set("armor_prop/armor",9);
                set("value",400);
                set("armor_prop/poison",2);
        set("light",-1);
        set("light_up",-1);
                set("wear_msg","$N戴上$n，$n立刻发出熊熊的磷光！\n");
                set("unequip_msg","$N脱下$n之后，$n的磷光逐渐消失。\n");
                setup();
        }
}
