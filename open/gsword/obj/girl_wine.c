// waterskin.c

inherit ITEM;
inherit F_LIQUID;

void create()
{
	set_name("女儿红", ({"girl red wine","wine","red"}) );
	set_weight(700);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long", "女儿红美酒装在一个葫芦里，酒性极烈\n");
		set("unit", "坛");
		set("value", 200);
		set("max_liquid", 15);
	}

	// The liquid contained in the container is independent, we set a copy
	// in each cloned copy.
	set("液体", ([
		"种类": "酒",
		"名称": "女儿红酒",
		"剩": 15,
		"止渴" : 20,
		"酒精成份": 12,
	]) );
	setup();
}
