// By Swy 最后修正 QC 98/6/20
// Modify by AceLan 调整命中率 99/04/05
#include <ansi.h>
int perform(object me,object target)
{
   int i;
   if( !target ) return notify_fail("你要对谁用计 ?\n");
   if( userp(target) ) return notify_fail("这招对玩者没用。\n");
   if( me->query("sen") < 20 )
      return notify_fail("你的精神力不够，无法用计。\n");
   if( me->query_skill("plan",1) < 45 )
      return notify_fail("你的谋略能力不够。\n");
   if( target->query_temp("follow")==1 )
      return notify_fail("相同的计策对同一个人没有效。\n");
   if( target->query("no_plan_follow") == 1)
       return notify_fail("此计策无法对此人使用!!!\n");
   me->add("sen",-15);
// 儒门...
   if( me->query("family/family_name") != "儒门")
      return notify_fail("不是儒生，不给你用咧！！^_^\n");
   me->start_busy(1);

         if(target->query_temp("no_plan") || target->query("no_plan"))
         {
         message_vision("$N忽然大声的说道,竟敢对我使出诱敌计,看来你是不想活了!!\n
         \n",target);
         target->kill_ob(me);
         me->start_busy(3);
         }
         else{
      message_vision(HIG + @LONG
$n中了$N的诱敌之计，突然勃然大怒，看来$n不杀死$N是不会甘休的！
LONG + NOR , me , target );
      target->set_leader(me);
target->kill_ob(me);
         }
      target->set_temp("follow",1);
   return 1;
}

