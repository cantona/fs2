// exert.c 修正 by babe

#include <skill.h>
#include <ansi.h>
inherit F_CLEAN_UP;

int main( object me, string arg, int repeat )
{
	string force, tmp;
	int i, r;

	seteuid(getuid());

	if( !arg )
		return notify_fail( "你要用内功做什么?\n" );
	notify_fail( "你的内功中没有这种功能。\n" );
	arg = lower_case(arg);
	tmp = arg;
	if( sscanf( arg, "%s %d", arg, repeat ) != 2 )
		arg = tmp;
	if( repeat < 1 ) repeat = 1;
	else if( repeat > 10 ) repeat = 10;
	if( me->is_busy() )
		return notify_fail( "你一运气用力, 发觉丹田中毫无内息。\n" );
	if( me->query_temp("no_power_e") )
		return notify_fail( "你感觉到体内有无数的气劲乱流, 使你无法正常的使用内力。\n" );
	if( (!me->query("food")||!me->query("water")) && userp(me) ) {
		if( random(100) < 1 ) {
			me->receive_wound( "kee", me->query("age") );
			write( HIR"你又饿又渴, 一时之间无法控制真气, 受到了内伤!"NOR );
		}
		return notify_fail( "你感觉又饿又渴! 无法运气!\n" );
	}

	if( stringp( force=me->query_skill_mapped("force") ) ) {
		for( i=0; i<repeat; i++ )
			if( SKILL_D(force)->exert_function( me, arg ) ) {
				r = 1;
				if( random(300) < (int)me->query_skill( "force", 1 ) )
					me->improve_skill( force, 1, 1 );
			}
			else if( SKILL_D("force")->exert_function( me, arg ) ) {
				r = 1;
				if ( random(300) < (int)me->query_skill( "force", 1 ) )
					me->improve_skill( "force", 1, 1 );
			}
		if( r == 1 )
			switch(arg) {
			case "reseckee" :
				message_vision( CYN"$N将体中的内力化成灵气，使灵气转强。\n"NOR, me ); break;
			case "recover" :
				message_vision( CYN"$N深深吸了" + chinese_number(repeat) + "口气，脸色看起来好多了。\n"NOR, me ); break;
			case "regenerate" :
				message_vision( CYN"$N深深吸了" + chinese_number(repeat) + "口气，手脚活动了几下，整个人看起来有活力多了。\n"NOR, me ); break;
			case "refresh" :
				message_vision( CYN"$N略一凝神，吸了"+chinese_number(repeat)+"口气，精神看起来清醒多了。\n"NOR, me ); break;
			}
		return r;
	}

	return notify_fail( "尚未选择(enable)所要使用的内功。\n" );
}

int help (object me)
{
        write(@HELP
指令格式 : exert <功能名称> [<施用对象>]
指令说明 :
           用内力进行一些特异功能，你必需要指定<功能名称>，
         <施用对象>则可有可无。在你使用某一种内功的特异功
          能之前，你必须先用 enable 指令来指定你要使用的内功。

注：如果你改变自己的内功，你原本蓄积的内力并不能直接转换过去，必须
    从 0 开始。
注：本命令可以重复使用, 如 10 exert refresh 或 exert refresh 10

其他参考 :
           help force 可得知一些大部分内功都有的功能，
           至于你所用的内功到底有没有该功能，试一试或
           参考其他说明便知。
HELP
        );
        return 1;
}
