// dumpling.c

inherit ITEM;
inherit F_FOOD;

void create()
{
	set_name("波萝面包",({"bread"}));
	set_weight(80);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long","又香又白的大面包 , 真想一口把他吞了 !\n");
		set("unit", "个");
		set("value",50);
		set("food_remaining", 3);
		set("food_supply", 100);
	}
	setup();
}
