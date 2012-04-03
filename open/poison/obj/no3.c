
inherit ITEM;
inherit "/open/poison/room/food.c";

void create()
{
	set_name("锅烧意面", ({"guo-sau noodle","noodle"}) );
	set_weight(100);
	if ( clonep() )
		set_default_object(__FILE__);
	else {
		set("long","
一碗很不寻常的面，面里有蛋、海鲜、肉类，味道相当鲜美。\n");
		set("unit","碗");
		set("value", 50);
		set("food_remaining",5);
		set("food_supply",70);
	}
	setup();
}

