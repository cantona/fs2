#include <ansi.h>
int update_condition(object me, int duration)
{
if(duration==0) me->delete_temp("no_power_e",1);
     tell_object(me , "你感觉到体内有无数的气劲乱流,使你无法正常的使用内力\n" NOR);
     me->set_temp("no_power_e",1);
     me->apply_condition("no_power_e",duration-1);
 if (duration < 1) {
     me->delete_temp("no_power_e",1);
     return 0;
                   }
        return 1;
}
