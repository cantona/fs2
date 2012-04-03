#include <ansi.h>
inherit F_CLEAN_UP;

int main(object me)
{
	object ob;
	if( !CLAN_D->clan_query( me->query("clan/id"), "home" ) )
		return notify_fail( "您想到哪里去?\n" );
	if( userp(me) && me->query("clan/rank") > 4 )
		return notify_fail( "您无权使用此指令。\n" );
	if( environment(me)->query("no_chome") )
	    return notify_fail( "这个地方不能用这个指令。\n");
	if( me->is_fighting() || me->is_ghost() || me->query_temp("pk_fight") )
		return notify_fail( "很抱歉, 你现在的情况不能使用这个指令。\n" );
	if( CLAN_D->what_clan_area(me)== "NULL" )
		me->set( "clan/out", file_name(environment(me)) );
	if( environment(me)->query("no_transmit") ) {
		if( me->query("food") < 200 )
			return notify_fail( "饿得全身无力, 动不了了。\n" );
        if(!wizardp(me)) //sorry,我不想一直full
		me->add( "food", -200 );
	}
	else {
        if(!wizardp(me)) //sorry,我不想一直full
		if( me->query("food") > 50 )
			me->add( "food", -50 );
		else
			return notify_fail( "饿得全身无力, 动不了了。\n" );
	}
	ob = CLAN_D->clan_query( me->query("clan/id"), "home" );
	message_vision( HIY"$N使出卓绝的轻功, 向"HIC + trans_color(ob->query("short")) + HIY"直奔而去。\n"NOR, me );
	me->move(ob);
	tell_room( ob, HIC"一道强风袭来！！" + me->query("name") + "的身影突然出现。\n"NOR, me );
	return 1;
}

int help(object me)
{
	write(@HELP

格式说明: c_home

 	  回到帮派核心。

HELP    );
        return 1;
}
