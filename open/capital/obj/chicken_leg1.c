// chicken_leg.c

#include <weapon.h>

inherit HAMMER;

void create()
{
	set_name("特制川辣鸡腿", ({ "chicken leg", "chicken", "leg" }) );
	set_weight(350);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long", "一枝通体鲜红的鸡腿，沾过特制的辣酱。\n");
		set("unit", "根");
		set("value", 300);
		set("食物", ([
                        "剩" : 5,       // 可以吃几口
                        "供应": 60,     // 每一口填饱肚子的量
                ]) );
		set("wield_msg", "$N抓起一根$n，握在手中当武器。\n");
		set("material", "bone");
	}
	init_hammer(2);
	setup();
}

int finish_eat()
{
	set_name("啃得精光的鸡腿骨头", ({ "bone" }) );
	set_weight(150);
	set("long", "一根啃得精光的鸡腿骨头。\n");
	return 1;
}
