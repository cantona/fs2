// recover.c

#include <ansi.h>

int exert( object me, object target )
{
	int	limit_force, value;

	limit_force = (int)me->query("max_force")/20;
	if( limit_force > 125 )
		limit_force = 125;
	else if( limit_force < 5 )
		limit_force = 5;
	if( target != me )
		return notify_fail( "只能用内功调理自己的气息。\n" );
	if( (int)me->query("force") < 20 || (int)me->query("force") < limit_force )
		return notify_fail( "内力不足。\n" );
	me->add( "force", -limit_force );

	value = (int)me->query("max_force")/4;
	if( value < 50 )
		value = 50;
	else if( value > 300 )
		value = 300;
	me->receive_heal( "kee", value );

	if( me->is_fighting() ) {
		me->start_busy(1);
		if( random(100) < 1 ) {
			message_vision( MAG"$N感到内息一阵混乱, 看来是走火入魔了!\n"NOR, me );
			message_vision( HIM"$N行动一滞, 空门大漏!\n"NOR, me );
			me->start_busy(2);
		}
	}
        return 1;
}
