// bandit.c
#include <ansi.h>

inherit NPC;

void create()
{
	set_name("肉身",({"body"}));
	set("gender","男性");
	set("combat_exp",0);
	setup();
}
void init()
{
	add_action("do_return","return");
}
int do_return()
{
	if(query("owner")!=this_player()->query("id"))
		return 0;
	message_vision(
	HIB "$N的影子往$n身上走进去，$N和$n已经合为一体了。\n",this_player(),this_object());
	message_vision(NOR,this_player());
	this_player()->set("name",this_object()->query("name"));
	this_player()->delete("sen-out");
	this_player()->add_temp("apply/attack",-10);
	this_player()->add_temp("apply/dodge",-10);
	this_player()->add_temp("apply/damage",-30);
	destruct(this_object());
	return 1;
}
