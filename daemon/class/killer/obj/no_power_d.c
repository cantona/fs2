#include <ansi.h>
int update_condition(object me, int duration)
{
if(duration==0) me->delete_temp("no_power_d",1);
     tell_object(me ,HIG"你的视线受绿光影响，因此你无法精准的使用绝招!!\n" NOR);
     me->set_temp("no_power_d",1);
     me->apply_condition("no_power_d",duration-1);
 if (duration < 1) {
     me->delete_temp("no_power_d",1);
     return 0;
                   }
        return 1;
}
