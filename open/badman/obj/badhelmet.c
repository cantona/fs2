// badhelmet.c by Oda

#include <armor.h>

inherit HEAD;

void create()
{
	set_name("邪恶头盔", ({"bad helmet", "helmet"}));
	set_weight(5000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
	set("long", "这是一顶集恶念所作成的头盔，强大的邪恶力量连雷公都不敢来找碴。\n");
	set("unit", "顶");
	set("value", 100000);
	set("material", "steel");
	set("armor_prop/armor", 10);
	set("thunder", 100);
	set("wear_msg", "$N慢慢的将$n戴上，脸上的表情突然变得狰狞了起来。\n");
	set("unequip_msg", "$N将$n脱掉，神情逐渐恢复自然。\n");
	}
	setup();
}
