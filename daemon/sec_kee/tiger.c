// gather.c 
#include <combat.h> 
#include <ansi.h>
inherit SSERVER; 
int kee_out(object me,object target)
{
 if(!me->is_fighting())
  return notify_fail("雷虎之气战斗中才能使用!!!。\n");
 if(!target->is_fighting())
  return notify_fail("对方并不是在处于战斗之中，所以无法使用雷虎之气!!!\n");
        if(me->query("max_s_kee")<20)
     {
          tell_object(me,"你的灵气修练不够。\n");
             return 1;
     }
if(me->query("s_kee") < 20 )
{ tell_object(me,"你没足够的灵气！\n");
  return 1; }
 if(target->query_temp("tiger")==1) {
 tell_object(me,"敌人已中雷虎，不能再用。\n");
 return 1; }
     message_vision(
          HIY "$N的灵气浮动，雷虎之气腾出！\n" NOR,me);
       message_vision(
          CYN "$n被雷虎之气缠住，不能动弹。\n" NOR,me,target);
        target->start_busy(2);
        target->set_temp("tiger",1);
        target->apply_condition("tiger_out",me->query("max_s_kee")/20);
        me->kill_ob(target);
        me->set("s_kee",0);
     return 1;
 
}

