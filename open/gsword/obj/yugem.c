#include <ansi.h>
inherit EQUIP;
void create()
{
    set_name("红玉坠子" , ({"gem"}) );
     set_weight(500);
     if ( clonep() )
              set_default_object(__FILE__);
     else {
            set("long", 
		"一条由难得一见的"+HIR"红宝石"NOR+"镶于其上的项炼 ,\n"
		"听说红宝石有收纳能量的功效\n");
            set("unit", "条");
            set("armor_type", "neck");
            set("value", 10000);
            set("armor_prop/force",3);
            set("armor_prop/armor",4);
            set("wear_msg", "$N把$n戴在脖子上 ,呼然一股力量注入$N的身上。\n");
     }
}

