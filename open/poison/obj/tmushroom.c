
#include <ansi.h>
inherit COMBINED_ITEM;

void create()
{
	set_name("千年灵芝",({"thousand mushroom","mushroom"}) );

	set("base_weight", 50);
	set("unit","朵");
	set("base_unit","朵");
	set("value",10000);
	set_amount(1);
	set("long","
在深山中生长千年的灵芝，和千年人篸一般吸收了千年的灵气，在补品中亦
同样属于特极品，传说灵芝生长过万年甚至能化成人形，具思想，能走动，
但亦属传说，无法证实。\n");
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
	int num=100+random(10);
	if ( !str || str != "mushroom") {return 0;}
	message_vision("$N吃下千年灵芝，觉得全身的元气似乎都恢复了。\n",me);
	this_player()->receive_heal("sen",num);
	add_amount(-1);
	return 1;
}

