inherit ITEM;

void create()
{
	set_name("炒豌豆",({"bean"}) );
	set_weight(100);
	if (clonep() )
		set_default_object(__FILE__);
	else{
		set("long","
一盘刚炒好的豌豆，用来当小菜是最合适不过了。\n");
		set("unit","盘");
		set("value",30);
		set("食物", ([
                        "剩" : 10,       // 可以吃几口
                        "供应": 18,     // 每一口填饱肚子的量
                ]) );
		}
	setup();
}
