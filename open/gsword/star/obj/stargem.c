#include <ansi.h>
inherit EQUIP;
void create()
{
  set_name("星破项炼" , ({"stargem"}) );
     set_weight(1000);
     if ( clonep() )
              set_default_object(__FILE__);
     else {
            set("long",
"这是由星破时, 四射的陨石所得到之石, 将此"+HIB"星破之石"NOR+"镶于此项炼 ,\n"
"听说星破时会散发众多不同能量, 而星破之石则吸纳星破时所散发的能量\n");
            set("unit", "条");
            set("armor_type", "neck");
            set("value", 10000);

		set("armor_prop/armor",3);
            set("armor_prop/parry",2);
            set("armor_prop/force",2);
set("wear_msg", "$N小心的$n戴在脖子上 ,一股星破之能源源不断注入$N的身上。\n");
     }
}
