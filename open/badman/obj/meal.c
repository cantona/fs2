// meal.c

inherit ITEM;

void create()
{
	set_name("特制大餐", ({ "special meal", "meal" }));
	set_weight(250);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long", "一盘香味四溢的恶人谷特制大餐\，不知道是什么做的。\n");
		set("unit", "盘");
		set("value", 250);
		set("食物", ([
                        "剩" : 5,       // 可以吃几口
                        "供应": 80,     // 每一口填饱肚子的量
                ]) );
	}
	setup();
}

int finish_eat()
{
	object who = this_player();
	tell_object(who,"咦？怎么吃到一根脆脆的？这...这不是人的手指吗？天哪！难不成...\n");
	tell_object(who,"想到这里，你真想把刚刚吃的东西全部吐出来。\n");
	destruct(this_object());
	return 1;
}
