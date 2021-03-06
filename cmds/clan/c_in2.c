// c_in.c by ACKY 05/24/00

inherit F_CLEAN_UP;

#include <ansi.h>

int clan_ally( string clan_id, string clan )
{
	string *ally;

	ally = CLAN_D->clan_query( clan, "ally" );

	if( !ally ) {
		write( "贵帮目前并没有与此帮会结盟。\n" );
       		return 0;
	}

	if( member_array( clan_id, ally ) == -1 ) {
		write( "贵帮目前并没有与此帮会结盟。\n" );
       		return 0;
       	}
       	else
       		return 1;
}

int main( object me, string clan )
{
        string clan_id;
        int num, war, level, gate;
        object to, from;

        if( !clan )
                return notify_fail("您想到哪里去?\n");
	if( !CLAN_D->have_clan( clan ) )
		return notify_fail( "无此帮派。\n" );
	if( me->is_fighting() || me->is_ghost() || me->query_temp("pk_fight") )
		return notify_fail( "很抱歉, 你现在的情况不能使用这个指令。\n" );
	if( environment(me)->query("no_transmit"))
		return notify_fail( "这个地方不能用此功能喔......。\n" );
	if( base_name(environment(me)) == CLAN_D->clan_query( me->query("clan/id"), "jail" ) )
		return notify_fail( "帮派监狱是逃不出去的。\n" );

	to = CLAN_D->clan_query( clan , "gate" );
	gate = CLAN_D->clan_query( clan , "gate_level" );
	clan_id = me->query("clan/id");

	if( clan_id == clan )
		level = 2;
	else if( clan_ally( clan_id, clan ) )
		level = 3;
	else
		level = 4;
	if( level > gate && !wizardp(me) )
		return notify_fail("所要前往的帮派不允许你进入。\n");
	if( environment(me)->query("no_transmit") ) {
		if( me->query("food") < 200 )
			return notify_fail( "饿得全身无力, 动不了了。\n" );
		me->add( "food", -200 );
	}
	else {
		if( me->query("food") > 50 )
			me->add( "food", -50 );
		else
			return notify_fail( "饿得全身无力, 动不了了。\n" );
	}
	message_vision( HIY"$N使出卓绝的轻功, 向"HIC +
		( to ? trans_color( to->short() ) : CLAN_D->clan_query( clan , "name" ) )
		+ HIY"直奔而去。\n"NOR, me );
	from = environment(me);
	if( CLAN_D->what_clan_area(me)== "NULL" )
		me->set( "clan/out", file_name(from) );
	me->move(to);
	tell_room( to, HIC"一道强风袭来！！" + me->query("name") + "的身影突然出现。\n"NOR, me );
	war = CLAN_D->clan_query( clan , "war" );
	if( !war ) {
		num = CLAN_D->clan_query( clan , "gatetax");
                if( me->query("clan/id") != clan )      {
                        if( me->query("bank/coin") < num*10000 && !wizardp(me) ){
                                message_vision(HIY"帮派闸门守卫说道：没钱还敢来？！\n"NOR,me);
                                message_vision(NOR"帮派闸门守卫运劲用力一踢，$N被踢得又高又远～～\n"NOR,me);
                                me->move(from);
                                message_vision(HIR"$N突然从天上墬了下来！！！\n"NOR,me);

                                return 1;
                        }
                        if( !wizardp(me) )      {
                                me->add("bank/coin",-num*10000);
                                CLAN_D->add_money( clan , num );
                        }
                        message_vision(HIY"帮派闸门守卫向$N收取关税"+CHINESE_D->chinese_number(num)+"两黄金。\n"NOR,me);
                }
        }

        return 1;
}

int help( object me )
{
        write( "
	c_in <帮派英文名称>: 移动到某帮派之闸门。

                                        by ACKY 05/24/2000
");
	return 1;

}
