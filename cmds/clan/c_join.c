// c_join.c by babe ^o^

inherit F_CLEAN_UP;

#include <ansi.h>

int help( object me )
{
	write(@HELP

帮派指令: c_join <玩家ID>

	邀请玩家加入帮派。

HELP );
	return 1;
}

int main( object me, string arg )
{
	object ob;

	if( me->query("id") == "guest" )
		return 0;
	if( !me->query("clan") ) {
		if( !arg )
			return notify_fail( "c_join <玩家ID>\n" );
		if( !( ob = present( arg, environment(me) ) ) || !living(ob) || !ob->is_character() || ob == me )
			return notify_fail( "您想加入谁的帮派?\n" );
		if( ob->query_temp("c_join") != me->query("id") )
			return notify_fail( "对方并没有邀请您加入帮派。\n" );
		me->set( "clan/id", ob->query("clan/id") );
		me->set( "clan/name", ob->query("clan/name") );
		me->set( "clan/title", "新进帮众" );
		me->set( "clan/rank", 6 );
		CLAN_D->is_member_or_add( ob->query("clan/id"), me->query("id"), 1 );
		message_vision( HIG"$N决定加入" + me->query("clan/name") + "。\n"NOR, me );
		log_file( "clan/cjoin", sprintf("[%s] %s %s 收 %s\n",
			ctime(time())[0..15], ob->query("clan/name"), ob->query("id"), me->query("id") ) );
		CHANNEL_D->do_channel( me, "ct",
			"\n\t我 - " + me->query("name") + "(" + me->query("id") + "), 向天发誓, 誓死效忠" + me->query("clan/name") + "。\n" );
		return 1;
	}
	if( me->query("clan/rank") > 4 )
		return notify_fail( "无权使用此指令。\n" );
	if( !arg )
		return help(me);
	if( !( ob = present( arg, environment(me) ) ) || !living(ob) || !userp(ob) || wizardp(ob) || ob == me )
		return notify_fail( "您想邀请谁加入帮派?\n" );
	if( ob->query("clan/name") )
		return notify_fail( "对方已经是" + ob->query("clan/name") + "的帮众。\n" );
	me->set_temp( "c_join", ob->query("id") );
	message_vision( HIY"$N诚挚地邀请$n加入" + me->query("clan/name") + "。\n"NOR, me, ob );
	tell_object( ob, HIC"如果愿意, 请以 c_join " + me->query("id") + " 加入" + me->query("clan/name") + "。\n"NOR );
	return 1;
}
