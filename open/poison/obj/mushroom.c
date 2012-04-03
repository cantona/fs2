
#include <ansi.h>
inherit COMBINED_ITEM;

void create()
{
	set_name("肉芝",({"ro mushroom","mushroom"}) );
	set("base_weight", 50);
	set("unit","朵");
	set("base_unit","朵");
	set("value",1000);
	set_amount(1);
	set("long","
肉芝是以动物尸骸为养份而生长的一种蕈类，在古中国，与石芝、木芝、
草芝、菌芝并称五芝，是草药中的特级品，弥足珍贵。\n");
	setup();
}
void init()
{
	if ( this_player()==environment() )
	add_action("do_eat","eat");
}
int do_eat(string str)
{	
	object me=this_player();
	int num=10+random(5);
	if ( !str || str != "mushroom") {return 0;}
	message_vision("$N服下灵芝，觉得恢复了不少元气。\n",me);
	this_player()->receive_heal("sen",num);
	add_amount(-1);
	return 1;
}

