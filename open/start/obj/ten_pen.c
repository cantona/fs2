//whip.c
#include <ansi.h>
#include <weapon.h>

inherit STABBER;

int special_att();

void create()
{
	set_name(HIG "灵龙天笔" NOR,({"ten pen","pen"}));
	set_weight(1000);
	if( clonep() )
	 set_default_object(__FILE__);
	else 
	 {
	  set("unit", "支");
	set("long","这是儒门世代相传的圣物，相传是用千年玄铁打造，无坚不摧。\n");
	  set("value", 10000);
	  set("material", "blacksteel");
          set("ski_level1", 35);
          set("ski_type1", "knowpen");
	 }
	init_stabber(80);
	setup();
}

