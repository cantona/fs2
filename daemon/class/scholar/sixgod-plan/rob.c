//Written By AceLan 98.7.22 趁火打劫之计...

#include <ansi.h>

int perform(object me, object target)
{
   if( !target ) return notify_fail("你要对谁用计？\n");

   if( !target->is_fighting() || !target->is_killing())
      return notify_fail("趁火打劫之计只能趁敌人陷入危战之时，趁其不备，发动攻击。\n");

   if( me->is_fighting() || me->is_killing())
      return notify_fail("泥菩萨过江，自身难保了，怎么还会有余力来趁火打劫呢？\n");

   if( me->query("sen") < 20 )
      return notify_fail("你的精神力不够，无法用计。\n");

if(target->query_temp("rob")==1)
return notify_fail("同一计谋只能用一次！！\n");
   if( me->query_skill("plan",1) < 30)
      return notify_fail("你的谋略能力不够。\n");
// 不是儒门
   if( me->query("family/family_name") != "儒门")
    return notify_fail("不是儒生，不给你用咧！！^_^\n");
   me->add("sen",-20);
   target->start_busy(3);
  target->set_temp("rob",1);
      message_vision(HIY"$N使出趁火打劫之计, 趁敌之危, 就势取利, 向敌人发动猛攻\n"NOR, me);
      me->fight_ob( target);
   return 1;
}