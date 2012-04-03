// dumpling.c

inherit ITEM;
					
void create()
{
	set_name("椒盐花生", ({ "peanut" }) );
	set_weight(100);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long", "一袋洒满特制盐巴，看起来很好吃的花生。\n");
		set("unit", "个");
		set("value", 30);
		set("食物", ([
                        "剩" : 10,       // 可以吃几口
                        "供应": 17,     // 每一口填饱肚子的量
                ]) );
	}
        setup();
}
