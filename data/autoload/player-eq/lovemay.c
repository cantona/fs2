// for lovemay by ACKY
// 长期提供 bug

#include <ansi.h>
#include <armor.h>
inherit CLOTH;

void create()
{
	set_name( HIM"诱"HIR"惑"HIY"魅"HIC"影"NOR , ({"sex cloth", "cloth" }) );
	set_weight(3000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set( "unit", "件" );
		set( "value", 0 );
		set( "material", "cloth" );
		set( "long",
			"这是一件爱玫专属的衣服，传说能色诱每一个人，使人神魂颠倒。\n" );
		set( "wear_msg",
			"$N突然摆\出撩人的姿态，穿起一件$n，全身散发出迷人的香味，使周遭的人都想入非非。\n" );
		set( "unequip_msg",
			"$N瞬间把$n脱了下来，一时之间$N的美色不再，四周的人也恢复了神态。\n" );
		set( "armor_prop/armor", 1 );
	}
	setup();
}

int query_autoload()
{
	return 1;
}
