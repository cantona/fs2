// sword.c : an example weapon
#include <weapon.h>
#include <ansi.h>

inherit SWORD;

void create()
{
	seteuid(getuid());
	set_name("流萤剑",({"yau sword","sword"}));
	set_weight(7000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "把");
		set("long","仙剑派七把宝剑之一,由逍遥子分赠给七个爱徒,并将此剑
取名为逍遥宝剑,与李逍遥天性放荡不拘,快意逍遥倒有几
分合适.\n");
		set("value",10000);
		set("material", "steel");
                set("wield_msg", "拿着$n,$N觉的浑身充满了力量.\n");
		set("unwield_msg", "$N将手中的$n插入腰间的剑鞘。\n");
	}
	init_sword(60);
	setup();
}
