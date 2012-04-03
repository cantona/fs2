//blade.c : 大刀
#include <ansi.h>
#include <weapon.h>

inherit BLADE;

void create()
{
	set_name(HIW"龙虎刀"NOR,({"dragon-tiger blade","blade"}));
    set_weight(1000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "把");
		set("long","金刀门开山祖师 -- 王蹇的佩刀 , 为金刀门至宝 \n");
		set("value",0);
		set("material", "steel");
		set("wield_msg", "$N从腰间抽出一把$n握在手中。\n");
		set("unwield_msg", "$N将手中的$n插入腰间的刀鞘。\n");
	}
	init_blade(100);
	setup();
}
int wield()
{
	return notify_fail("如此神器 , 你不配使用 , 物归原主吧 !\n");
	return 1;
}
int query_autoload()
{
	return 1;
}
