
inherit ITEM;
inherit "/open/poison/room/food.c";

void create()
{
	set_name("阳春面",({"yang-chun noodle","noodle"}) );
	set_weight(100);
	if ( clonep() )
		set_default_object(__FILE__);
	else{
		set("long","
一碗普通的阳春面，加了店里的调味料，味道一定更好。\n");
		set("unit","碗");
		set("value",30);
		set("food_remaining", 5);
		set("food_supply", 40);
		}
	setup();
}

