// rose_poison.c

#include <ansi.h>

int update_condition(object me, int duration)
{
     if(duration==0) return 0;
      me->start_busy(1);
      me->apply_condition("tiger_out",duration-1);
         message_vision(
              HIY "$N被雷虎之气缠住，无法动弹。\n" NOR,me);
	if( duration < 1 ) return 0;
	return 1;
}
