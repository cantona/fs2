inherit COMBINED_ITEM;
#include <ansi.h>

void create()
{
	set_name(HIR"燃木材"NOR,({"burned-torch","torch"}));
	set_weight(100);
	if( clonep() )
                set_default_object(__FILE__);
	else
	{
		set("value",1);
		set("base_unit","根");
		set("unit","堆");
		set("long","这是一根已经燃烧过的木材，无法再度燃烧。\n");
	}
	set_amount(1);
setup();
}