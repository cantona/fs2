// sex box by ACKY

inherit ITEM;
#include <ansi.h>

void create()
{
	set_name( HIR"情趣礼盒"NOR, ({ "sex box", "box" }) );
	set( "long", HIM"里面装着全套情趣用品(open box)。"NOR );
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set( "weight", 1000 );
		set( "unit", "盒" );
		set( "value", 1000000 );
	}
	setup();
}


void init()
{
	if( !present( this_object(), this_player() ) )
		return;
	add_action( "do_open", "open" );
}

int do_open( string arg )
{
	object	me, ob, sex;
	string	str;

	if( !arg || sscanf( arg, "%s", str ) != 1 )
		return 0;
	if( str != "box" )
		return 0;

	me = this_player();
	ob = this_object();
	
	if( me->query("gender")=="男性" ) {
		sex = new("/open/clan/area/home/sex1");
		if( ob->query("male")==1 )
			return notify_fail( ob->name() + "里的"+ sex->name() + "已被拿走啰！\n" );
		message_vision( "$N从" + ob->name() + "拿出一" + sex->query("unit") + sex->name() + "。\n", me );
		ob ->set( "male", 1 );
		sex->move(me);
	}
	else {
		sex = new("/open/clan/area/home/sex2");
		if( ob->query("female")==1 )
			return notify_fail( ob->name() + "里的"+ sex->name() + "已被拿走啰！\n" );
		message_vision( "$N从" + ob->name() + "拿出一" + sex->query("unit") + sex->name() + "。\n", me );
		ob ->set( "female", 1 );
		sex->move(me);
	}
	return 1;
}

