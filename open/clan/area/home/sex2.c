// love potion by ACKY

inherit ITEM;
#include <ansi.h>

void create()
{
	set_name( HIM"狂想春药"NOR, ({ "love potion", "potion" }) );
	set( "long", "一罐强效催淫剂, 请小心使用(use potion), 除了爽快身体也要顾好。" );
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set( "weight", 500 );
		set( "unit", "罐" );
	}
	setup();
}


void init()
{
	if( !present( this_object(), this_player() ) )
		return;
	add_action( "do_use", "use" );
}

int do_use( string arg )
{
	object	me, ob;
	string	str;

	if( !arg || sscanf( arg, "%s", str ) != 1 )
		return 0;
	if( str != "potion" )
		return 0;

	me = this_player();
	ob = this_object();
	
	if( me->query("age") < 18 )
		return notify_fail( "未成年不可以使用唷！\n" );

	if( me->query("gender")=="女性" ) {
		if( me->query("gin") > 200 )
			me->add( "gin", -random(100)-100 );
		else
			return notify_fail( "妳的精力不足了, 休息一下吧！\n" );
		if( me->query("force") > 200 )
			me->add( "force", -random(100)-100 );
		else
			return notify_fail( "妳没力气自慰了, 休息一下吧！\n" );
		if( ob->query("use")>100 )
			return notify_fail( ob->name() + "已被妳用光了！\n" );
		message_vision( HIY"$N从" + ob->name() + HIY"里面倒出一颗药丸吞了下去, 眼睛突然亮了起来。\n"NOR, me );
		message_vision( HIM"$N腼腆地脱下裙子, 开始自慰。\n"NOR, me );
		call_out( "do_use_2", 5, me );
		ob->add( "use", 1 );
	}
	else
		return notify_fail( ob->name() + "是女人才能用的喔！\n" );
	return 1;
}

void do_use_2( object me )
{
	me->do_command( "say 唔~ 好湿喔~ 人家不行了~" );
	call_out( "do_use_3", 5, me );
}

void do_use_3( object me )
{
	object ob;
	me->do_command( "say 唔~ 人家不行了~ 要去了要去了~" );
	message_vision( HIY"$N湿了一地。\n"NOR, me );
	ob = new("/open/clan/area/home/sex2_2");
	ob->set_name( HIW + me->name() + "的爱液"NOR , ({ "love water", "water" }) );
	ob->move(environment(me));
}
