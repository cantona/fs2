
#include <ansi.h>

inherit EQUIP;
void create()
{
	set_name("簑衣",({"rain coat","coat"}) );
	set_weight(2500);
	if ( clonep() )
		set_default_object(__FILE__);
	else{
		set("long","
一件农夫常穿的簑衣。\n");
		set("material","plant");
		set("unit","件");
		set("value",30);
		set("armor_type","cape");
		set("armor_prop/armor",3);
		setup();
	}
}

