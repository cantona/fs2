// sword.c : an example weapon
#include <weapon.h>
#include <ansi.h>

inherit SWORD;

void create()
{
	seteuid(getuid());
        set_name(HIR"连阳剑" NOR,({"sun_fire_sword","sword"}));
	set_weight(9000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "把");
       	set("long",
"灵剑连阳, 和灵刀夜千鸟, 灵笔丽玉蝶兰并称「开天三灵器”.剑身通体成虹, 剑锋
更有隐隐泛出如火红光, 锐利无比.\n");
		set("value",10000);
		set("material", "steel");
 	set("wield_msg", "$N拔出"HIR"连阳剑"NOR", 刹那间虹光闪耀, 不可逼视。\n");
	set("unwield_msg", "$N将右手内劲收回,$n消失无形 。\n");
        set("weapon_prop/sword",10);
	}
        
	init_sword(90);
	setup();
}
