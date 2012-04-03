#include <ansi.h>

inherit COMBINED_ITEM;

void create()
{
	set_name("蛇胆", ({"snake gall", "gall"}) );
	set("base_weight",50);
		set("unit","粒");	
		set("base_unit","粒");
		set("value",0);
		set_amount(1);
		set("long","由蛇腹中取出的蛇胆，有解毒的功效。\n");
 	setup();
}
void init()
{
	if( this_player()==environment() )
	add_action("do_take","take");
}
int do_take(string arg)
{
	if( !arg || arg != "gall") return notify_fail("你要吃甚么呀?\n");
	message_vision(
"$N一口吞下蛇胆。\n",this_player() );

	this_player()->apply_condition("snake_poison", 0);
	add_amount(-1);
	return 1;
}
 
