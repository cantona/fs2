// c_out.c by ACKY

#include <ansi.h>
#include <login.h>

inherit F_CLEAN_UP;

int main( object me )
{
	int i;
	object from, *count;
	string filep, gate;

	seteuid(getuid());
	filep = me->query("clan/out");
    if(!filep) filep="/open/common/room/inn.c";
	if( !me->query("clan") )
		return 0;
	if( me->is_fighting() )
		return notify_fail( "您正忙于战斗！！\n" );
	if( CLAN_D->what_clan_area(me) == "NULL" )
		return notify_fail( "此处并非帮派区域。\n" );
	gate = CLAN_D->clan_query( CLAN_D->what_clan_area(me), "gate" );
	if( base_name(environment(me)) == CLAN_D->clan_query( me->query("clan/id"), "jail" ) )
		return notify_fail( "帮派监狱是逃不出去的。\n" );
	if( !CLAN_D->is_clan_room(me) )	{
		if( file_name(environment(me)) != gate )
			return notify_fail( "此处并非帮派闸门。\n" );
	}
	else if( me->query("clan/rank") > 4 )
		if( file_name(environment(me)) != gate )
			return notify_fail( "此处并非帮派闸门。\n" );
	from = environment(me);
	message_vision( HIY"$N运劲全身, 使出绝世轻功, 向"HIC + trans_color(filep->query("short")) + HIY"飞奔而去。\n"NOR, me );
	me->move(filep);
	tell_room( filep, HIW"一道人影！！闪了过去！！"+me->query("name")+"突然出现在眼前……\n"NOR, me );
/*	if( me->query("clan/rank") < 5 &&
		base_name(from)==CLAN_D->clan_query(me->query("clan/id"), "gate" ) &&
		filep->query("no_transmit")!=1 ) {
		count = all_inventory(from);
		i = sizeof( count );
		while(i--) {
			if( !count[i]->is_fighting() &&
				living(count[i]) &&
				count[i]->query_leader()==me &&
				count[i]->query("clan/out")->query("no_transmit")!=1 ) {
				message_vision( HIY"$N运劲全身, 使出绝世轻功, 尾随" + me->query("name") + "飞奔而去。\n"NOR, count[i] );
				count[i]->move(filep);
				count[i]->set( "food", 0 );
				count[i]->start_busy(random(20)+1);
				tell_room( filep, HIW"一道人影！！闪了过去！！"+count[i]->query("name")+"突然出现在眼前……\n"NOR, count[i] );
			}
		}   
	} */
	return 1;
}

int help( object me )
{
	write("
	c_out: 离开帮派。

	       阶级五以下: 限制于帮派闸门才能离开。

	       阶级四以上: 可于帮派闸门带领帮众离开。

							by ACKY 2000/02/23

");
        return 1;
}
