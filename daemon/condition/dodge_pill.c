#include <ansi.h>
int update_condition(object me, int duration,int j)
{
     if(duration==1) 
     {  
     message_vision(HIR"$N身上红龙精元的效力已经消失!!\n"NOR,me);
     me->add_temp("apply/dodge",-100);
     return 0;
     }
     me->apply_condition("dodge_pill",duration-1);
     message_vision(HIR"红龙精元的效力慢慢在$N身上蔓延!!\n"NOR,me);
     if( duration < 1 )
     return 0;
     return 1;
}
