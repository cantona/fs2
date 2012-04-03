// luwei.c

inherit ITEM;

void create()
{
	set_name("卤味", ({ "lu wei", "lu", "wei" }) );
	set_weight(100);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long", "一盘香喷喷，令人口水直流的卤味。\n");
		set("unit", "盘");
		set("value", 100);
		set("食物", ([
                        "剩" : 4,       // 可以吃几口
                        "供应": 50,     // 每一口填饱肚子的量
                ]) );
	}
	setup();
}
