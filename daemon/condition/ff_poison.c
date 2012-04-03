// rose_poison.c

#include <ansi.h>

int update_condition(object me, int duration)
{
  if(duration < 1||me->query("force")<10) {
    tell_object(me, "你的气血渐渐顺畅了。\n");
    return 0;
  }
  else {
    // 改成乱数, 并且调小一点
    me->add("force",-1*(random(me->query_skill("force",1)/10)+1));
    me->apply_condition("ff_poison",duration-1);
    tell_object(me,HIY "你气血失调，内力无法恢复。\n" NOR);
  }
  return 1;
}
