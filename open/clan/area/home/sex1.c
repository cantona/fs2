// sex oil by ACKY

inherit ITEM;
#include <ansi.h>

void create()
{
	set_name( HIG"狂想神油"NOR, ({ "sex oil", "oil" }) );
	set( "long", "一瓶强力壮阳药水, 请小心使用(use oil), 除了爽快身体也要顾好。" );
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set( "weight", 500 );
		set( "unit", "瓶" );
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
	if( str != "oil" )
		return 0;

	me = this_player();
	ob = this_object();
	
	if( me->query("age") < 18 )
		return notify_fail( "未成年不可以使用唷！\n" );

	if( me->query("gender")=="男性" ) {
		if( me->query("gin") > 200 )
			me->add( "gin", -random(100)-100 );
		else
			return notify_fail( "你的精力不足了, 休息一下吧！\n" );
		if( me->query("force") > 200 )
			me->add( "force", -random(100)-100 );
		else
			return notify_fail( "你没力气打手抢了, 休息一下吧！\n" );
		if( ob->query("use")>100 )
			return notify_fail( ob->name() + "已被你用光了！\n" );
		message_vision( HIY"$N将" + ob->name() + HIY"涂抹在大肉棒上, 眼睛突然亮了起来。\n"NOR, me );
		message_vision( HIM"$N迅速脱下裤子, 掏出热呼呼的大肉棒, 熟练地打起枪来。\n"NOR, me );
		call_out( "do_use_2", 5, me );
		ob->add( "use", 1 );
	}
	else
		return notify_fail( ob->name() + "是男人才能用的喔！\n" );
	return 1;
}

void do_use_2( object me )
{
	me->do_command( "say 喔~ 真是爽翻啦!" );
	call_out( "do_use_3", 5, me );
}

void do_use_3( object me )
{
	object ob;
	me->do_command( "say 喔~ 喔~ 真是爽毙啦!" );
	message_vision( HIY"$N疯狂地射了一地。\n"NOR, me );
	ob = new("/open/clan/area/home/sex1_1");
	ob->set_name( HIW + me->name() + "的精液"NOR , ({ "semen" }) );
	ob->move(environment(me));
}
