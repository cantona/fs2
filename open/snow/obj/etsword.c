// short_sword.c

#include <weapon.h>

inherit SWORD;

void create()
{
          set_name("倚天剑",({"et sword","sword"}));
	set_weight(3000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "把");
          set("value",30000);
		set("material", "iron");
		set("long",
         "这是一把武林奇剑，相传是郭靖死守襄阳时打造的。\n");
	}
           init_sword(75, SECONDARY);
	setup();
}
