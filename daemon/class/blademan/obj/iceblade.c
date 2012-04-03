// blade.c
#include <weapon.h>
#include <ansi.h>
inherit BLADE;
void create()
{
set_name(HIC"雪影"NOR,({"iceblade","blade"}));
set_weight(19000);
if(clonep())
set_default_object(__FILE__);
else {
set("unit", "把");
set("value",70000);
set("weapon_prop/dodge",10);
set("weapon_prop/parry",10);
set("weapon_prop/move", 5);
set("material", "steel");
set("long", @LONG

雪影乃是一把稀世宝刀，刀身上阵阵透出寒气让人感觉出它的威力。
听说世上只有一把剑能与之抗衡，但这把剑还不知道是哪一把！
LONG
);
set("wield_msg","$N抽出寒气透骨的$n握在手中，$N的手瞬间的蒙上一层霜，$N感觉到$n无匹的力量注入$N的体内。\n");
set("unwield_msg","$N将$n插回背后的缠刀布中。\n");
	}
init_blade(100);
set("ski_type1","blade");
set("ski_type2","dragon-blade");
set("ski_level1", 100);
set("ski_level2", 110);
	setup();
}
