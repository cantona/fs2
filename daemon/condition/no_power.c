#include <ansi.h>
int update_condition(object me, int duration)
{
if(duration==0) me->delete_temp("no_power",1);
     tell_object(me , "你眼底仍残存有炫目的剑光，使你无法以全力来战斗\n" NOR);
     me->set_temp("no_power",1);
     me->apply_condition("no_power",duration-1);
 if (duration < 1) {
     me->delete_temp("no_power",1);
     return 0;
                   }
        return 1;
}
