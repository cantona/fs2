#include <weapon.h>
#include <ansi.h>

inherit STICK;

void create()
{
        set_name( HIR"圣火令"NOR,({"Fire-stick"}) );
     set_weight(20000);
     if( clonep() ) 
               set_default_object(__FILE__);
     else {
            set("long","圣火教阵教之宝，一共有六只，每只皆透出诡异的暗红光芒。\n");
            set("unit", "把");             
            set("value",300000);
            set("material","crimsonsteel");
            set("no_give",1);
            set("no_drop",1); 
            set("no_sell",1);
            set("armor_prop/attack", 5);
            set("armor_prop/force", 10);
            set("armor_prop/stick", 10);
            set("armor_prop/move", -10);
        }
        init_stick(120);

        set("wield_msg", "$N感觉到圣火教历代教主宏大的功力，源源不断的涌入$N的双手\n");
        set("unwield_msg", "$n一经离手，所有的力量渐渐从$N的丹田流失。\n");

        setup();
}                   
