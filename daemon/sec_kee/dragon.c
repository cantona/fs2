// gather.c
#include <combat.h>
#include <ansi.h>
inherit SSERVER;
int kee_out(object me,object target)
{
int msk=me->query("max_s_kee",1);
if(msk > 500) msk=500;
     if(me->query("s_kee")*5<me->query("max_s_kee"))
      {
          tell_object(me,"你的灵气不够。\n");
          return 1;
      }
 if(!me->is_fighting())
  return notify_fail("青龙之气战斗中才能使用!!!。\n");
 if(!target->is_fighting())
  return notify_fail("对方并不是在处于战斗之中，所以无法使用青龙之气!!!\n");
 if(target->query_temp("dragon")==1) {
 tell_object(me,"敌人已中青龙，不能再用。\n");
 return 1; }
      message_vision(
         HIG + "$N灵气浮现，只见一条青龙从你体内冲出！\n" NOR,me);
         message_vision(  CYN "结果$N的青龙之气贯穿$n的身体。\n" NOR,me,target);
target->receive_damage("kee",2*me->query("max_s_kee"));
        target->set_temp("dragon",1);
        target->apply_condition("dragon_out",me->query("max_s_kee")/10);
      COMBAT_D->report_status(target);
      me->set("s_kee",0);
      me->kill_ob(target);
        return 1;
}
