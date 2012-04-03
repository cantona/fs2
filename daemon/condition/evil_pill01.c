#include <ansi.h>

int update_condition(object me, int duration)
{
	if( duration == 0 )
	{
		message_vision(HIY"\n$N不断的从口中吐出许多大大小小的骨蛊虫～～\n\n"NOR,me);
		me->delete_temp("evil_no_damage");
		tell_object(me,HIW"你感觉舒服多了。\n"NOR);
		return 0;
	}
	if( duration >= 3 )
	{
		if( !me->query_temp("evil_no_damage") )
		{
			me->set_temp("evil_no_damage",1);
			tell_object(me,HIW"\n肚子突然一阵疼痛，吞食入腹的骨蛊蛹似乎开始产生作用。\n\n"NOR);
		}
		else
			tell_object(me,HIR"\n阵痛不断的从你的腹部传至于全身，你不断的冒着冷汗。\n\n"NOR);
		me->receive_damage("gin",200);
		me->receive_damage("kee",200);
		me->receive_damage("sen",200);
		COMBAT_D->report_status(me,1);
		me->apply_condition("evil_pill01", duration - 1);
  		return 1;
	}
	if( duration >= 1 )
	{
		tell_object(me,HIY"\n阵痛似乎减轻了不少，你的脸色也渐渐地和缓了点。\n\n"NOR);
		me->receive_damage("gin",100);
		me->receive_damage("kee",100);
		me->receive_damage("sen",100);
		COMBAT_D->report_status(me, 1);
		me->apply_condition("evil_pill01", duration - 1);
  		return 1;
	}
        if( duration < 1 ) 
        return 0;
return 1;
}
