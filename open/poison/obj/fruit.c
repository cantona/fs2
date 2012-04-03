#include <ansi.h>

inherit COMBINED_ITEM;

void create()
{
	set_name("血龙果",({"blood fruit","fruit"}) );
	set("base_weight",50);
		set("unit","粒");	
		set("base_unit","粒");
		set("value",0);
		set_amount(1);
		set("long","一粒如血般红的果子,相传血龙果有疗伤提神的效用。\n");
 	setup();
}
void init()
{
	if( this_player()==environment() )
	add_action("do_take","take");
}
int do_take(string arg)
{
	if( !arg || arg != "fruit") return notify_fail("你要吃甚么呀?\n");
	message_vision(
"$N将血龙果一口吞下,只觉得浑身有说不出的畅快.\n",this_player() );

	this_player()->receive_heal("gin",10);
	this_player()->receive_heal("kee",10);
	this_player()->receive_heal("sen",10);
	this_player()->apply_condition("snake_poison", 0);
	add_amount(-1);
	return 1;
}
 
