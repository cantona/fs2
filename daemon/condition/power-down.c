#include <ansi.h>
int update_condition(object me, int duration,int j)
{
     if(duration==0) 
     {  
     message_vision(HIW"$N的力量渐渐复原, 功力慢慢恢复!!\n"NOR,me);
     me->delete_temp("power-down");
     return 0;
     }
     me->apply_condition("power-down",duration-1);
     message_vision(HIW"$N的力量渐渐复原, 但是仍然无法使出全力!!\n"NOR,me);
     me->set_temp("power-down",me->query_condition("power-down"));
     if( duration < 1 )
     return 0;
     return 1;
}

