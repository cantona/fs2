#include <ansi.h>

inherit F_CLEAN_UP;

int help( object me );

int main( object me, string arg )
{
	int n, value, num1;
	if( !me->query("clan") ) return 0;
	if( !arg )
		return help(me);
	if( me->query("clan/rank") > 3 )
		return notify_fail( "无权使用此指令。\n" );

	if( sscanf( arg, "%d", n )!=1 || n<0 || n>1 )
		return notify_fail( "状态只能输入(0|1)。\n" );

	CLAN_D->clan_set( me->query("clan/id"), "alert", n );
	switch( n ) {
	case 1:
		CHANNEL_D->do_channel( me, "ct",
			"\n\t我 -「"HIW+me->query("clan/title")+HIY"”郑重的宣布……\n\t" +
			"本帮全员进入警戒备战状态。"NOR );
		break;
	case 0:
		CHANNEL_D->do_channel( me, "ct",
			"\n\t我 -「"HIW + me->query("clan/title") + HIY"”郑重的宣布……\n\t" +
			"本帮全员解除警戒备战状态。"NOR );
	}

        return 1;
}

int help( object me )

{
	write(@HELP

格式说明: c_alert <状态>

	  设定警戒备战状态

						by ACKY 08/17/2000
HELP);
	return 1;
}

