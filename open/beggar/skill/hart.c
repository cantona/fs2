// Chan 1/5重新修正
// 用于泷山的武学之中
#include <ansi.h>

int update_condition(object me, int duration)
{
  if( duration > 1 )
  {
        tell_object( me , HIY "你的内伤发作,只觉得全身经脉好像移位般,十分痛苦!!\n" NOR);
     message("vision", me->name() + "[1;37m暗伤发作,整个人屈在地上表现出极为痛苦的表情.[0m \n",
     environment(me), me);
     if(me->is_fighting())
      me->start_busy(1);
        me->add("kee",-20);
        me->add("force",-40);
        if( me->query("force") < 0 ) me->set("force",0);
        me->apply_condition("hart",duration -1);
        COMBAT_D->report_status(me, 1);
   }
  if( duration < 2 )
   return 0;
  return 1;
}
