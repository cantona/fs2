inherit ITEM;
#include <ansi.h>
void create()
{
	set_name(HIY "怨世寒毒的解药" NOR,({"cold pill","pill"}));
	set("unit","颗");
	set("value",5000);
        setup();
}
void init()
{
	add_action("do_eat","eat");
}
int do_eat( string arg )
{
	if( !arg || arg != "pill" ) return 0;
	message_vision("$N服下了"+this_object()->name()+"。\n",this_player());
	this_player()->set_temp("no_fear_poison",1);
	destruct(this_object());
	return 1;
}
