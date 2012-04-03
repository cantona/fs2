// wine.c

inherit ITEM;
inherit F_LIQUID;

void create()
{
	set_name("白干", ({ "wine" }) );
	set_weight(700);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long", "一壶香醇的白干，闻起来烈的很。\n");
		set("unit", "壶");
		set("value", 150);
		set("饱和", 15);
	}

	// The liquid contained in the container is independent, we set a copy
	// in each cloned copy.
	set("液体", ([
		"种类": "酒",
		"名称": "白干",
		"剩": 15,
		"止渴" : 30,
		"drunk_apply": 9,
	]) );
	setup();
}
