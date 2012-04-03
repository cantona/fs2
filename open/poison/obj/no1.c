
inherit ITEM;
inherit "/open/poison/room/food.c";

void create()
{
	set_name("牛肉面", ({"beef noodle","noodle"}) );
	set_weight(100);
	if ( clonep() )
		set_default_object(__FILE__);
	else{
		set("long","
一碗汤浓，肉又大块的牛肉面。\n");
		set("unit","碗");
		set("value",70);
		set("food_remaining", 5);
		set("food_supply", 100);
		set("eat_message","
$N喝了一口汤，吃了一口面，并夹了一块大大地牛肉放在口中咀嚼，真是一大享受。\n");
		}
	setup();
}

