inherit ITEM;

void create()
{
	set_name("便当", ({ "bento" }) );
	set_weight(80);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long", "一个香喷喷、热腾腾的大便当。\n");
		set("unit", "个");
		set("value", 200);
		set("weight",3000);
		set("食物", ([
                        "剩" : 20,       // 可以吃几口
                        "供应": 80,     // 每一口填饱肚子的量
                ]) );
	}
        setup();
}
