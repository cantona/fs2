// By onion
#include <weapon.h>
inherit SWORD;

void create()
{
	set_name("白银剑", ({ "white sword","sword" }) );
	set_weight(6000);
	if( clonep() )
		set_default_object(__FILE__);
	else 
	{
	  set("long", "由纯银与精铁粹练打造而成, 剑身不时发出明亮的光彩。\n");
	  set("unit", "把");
	  set("value", 8000);
	  set("material", "silver");
	}
	init_sword(42);
	setup();
}
