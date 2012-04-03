#include <ansi.h>

int update_condition(object me, int duration)
{
        if( duration < 1 ) 
        {
	me->delete_temp("mkill");
	return 0;
        }
        if( !living(me) ) 
        {
	message("vision", me->name() + "被魔气所带来的恐惧感吓死了!!\n",
	environment(me), me);
	return 0;
        }
        else 
        {        
	me->start_busy(1);
    me->add("gin",-(10*duration));
    me->add("sen",-(10*duration));
  	me->apply_condition("mkill_out",duration-1);
      	message_vision(
              	      HIM "$N被地狱般的魔气笼罩，全身神经似乎都被麻毙了！。\n" NOR,me);
        }
        return 1;
}

