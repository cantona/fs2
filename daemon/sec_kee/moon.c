// gather.c
#include <combat.h>
#include <ansi.h>
inherit SSERVER;
int kee_out(object me,object target)
{
int msk=me->query("max_s_kee",1);
if(msk > 1200) msk=1200;
     if(me->query("s_kee")<20)
      {
          tell_object(me,"你的灵气不够。\n");
          return 1;
      }

      message_vision(
         HIW + "$N灵气浮现，只见一道阴柔的剑气从$N破体冲出！\n" NOR,me);
         message_vision(  HIC "\n飘渺的幽幽剑气，轻柔的穿刺过$n奇经八脉。\n"NOR,me,target);
        target->receive_damage("kee",7*me->query("max_s_kee"));

        target->start_busy(10);
        COMBAT_D->report_status(target);
      me->add("s_kee",-20);
      me->kill_ob(target);
        return 1;
}


