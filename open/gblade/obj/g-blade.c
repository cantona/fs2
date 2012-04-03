// sword.c : an example weapon

#include <weapon.h>

inherit BLADE;

void create()
{
	set_name("小金刀",({"gold blade","blade"}));
	set_weight(7000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("no_drop",1);
		set("unit", "把");
		set("long","一把金光闪闪的小刀。\n");
	/*	set("value",1000);	*/
		set("material", "gold");
		set("wield_msg", "$N「唰”地一声抽出一把$n握在手中。\n");
		set("unwield_msg", "$N将手中的$n插入腰间的刀鞘。\n");
	}
	init_blade(10);
	setup();
}
/*
int query_autoload()
{
   if(this_player()->query("family/family_name")=="金刀门")
   return 1;
   return 0;
}
*/
