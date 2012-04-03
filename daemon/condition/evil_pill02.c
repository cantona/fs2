#include <ansi.h>

int update_condition(object me, int duration)
{
	if( duration == 0 )
	{
		message_vision(HIY"\n$N不断的从口中吐出许多大大小小的恶蛊虫～～\n\n"NOR,me);
		me->delete_temp("evil_no_enemy");
		tell_object(me,HIW"你感觉轻松多了。\n"NOR);
		return 0;
	}
	if( duration >= 3 )
	{
		if( !me->query_temp("evil_no_enemy") )
		{
			me->set_temp("evil_no_enemy",1);
			tell_object(me,HIW"\n肚子突然一阵疼痛，吞食入腹的恶蛊卵似乎开始产生作用。\n\n"NOR);
		}
		else
			tell_object(me,HIR"\n阵痛不断的从你的腹部传至于全身，你痛的无法动弹。\n\n"NOR);
		me->start_busy(3);
		COMBAT_D->report_status(me,1);
		me->apply_condition("evil_pill02", duration - 1);
  		return 1;
	}
	if( duration >= 1 )
	{
		tell_object(me,HIY"\n阵痛似乎减轻了不少，可是你的身体还是无法活动自如。\n\n"NOR);
		me->start_busy(2);
		COMBAT_D->report_status(me, 1);
		me->apply_condition("evil_pill02", duration - 1);
  		return 1;
	}
        if( duration < 1 ) 
        return 0;
return 1;
}
