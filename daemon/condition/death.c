#include <ansi.h>
int update_condition(object me, int duration)
{
if( duration == 0 )
return 0;
  if( duration >= 1 )
  {
     tell_object(me,HIB"死灵魔音再度响遍全身, 你只觉得体内一阵作恶!!\n"NOR);
     message_vision(HIR"$N突然倒地不起, 猛然狂吐鲜血, 奇经八脉受到阻塞, 顿时无法动弹!!\n"NOR,me);
     me->receive_wound("gin",me->query("eff_gin")/10);
     me->receive_wound("kee",me->query("eff_kee")/10);
     me->receive_wound("sen",me->query("eff_sen")/10);
     COMBAT_D->report_status(me, 1);
     me->start_busy(1);
     me->apply_condition("death", duration - 1);
  return 1;
  }
        if( duration < 1 ) 
	return 0;
return 1;
}
