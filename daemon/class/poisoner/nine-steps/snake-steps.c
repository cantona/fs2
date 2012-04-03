#include <ansi.h>
inherit F_FUNCTION;
inherit SSERVER;
int sk;
void remove_effect (object me);
int perform(object me, object target)
{
sk=me->query_skill("nine-steps",1);
if (sk<80)
     return notify_fail ("妳的技能等级尚不足使用此技能!\n");
  if (me->query ("force") < 200)
     return notify_fail ("妳的内力不足!\n");
  if ((int)me->query_temp ("snake-steps", 1))
     return notify_fail ("妳已经使用灵蛇幻影了。\n");
  if ( me->query("class") !="poisoner" )
     return notify_fail ("妳不是舞者无法使用灵蛇幻影。\n");

if( me->is_fighting() ) me->start_busy(1); //

  message_vision ("\n"HIY"$N"NOR"神形意转,运使出"HIG"九天灵影步法"NOR"终极奥义"HIW"ζ"HIY"灵。蛇。幻。影"HIW"ζ"NOR"\n",me,target);
  me->add ("force", -200);

       
  message_vision (HIM"刹时间$N整个人变得如灵蛇般灵活。\n"NOR, me,target);

// 设这个mark后就有dodge_sp 了
  me->set_temp ("snake-steps", 1);
   
  me->start_call_out((: call_other, __FILE__, "remove_effect",me:),sk*2);

  return 1;
}

void remove_effect (object me)
{
// 删除 manashield   
int fun=me->query("functions/snake-steps/level");
  me->delete_temp ("snake-steps");
  tell_object (me, NOR"妳觉得自己的身体沈重下来了。\n"NOR);
  if(fun<100) function_improved("snake-steps",random(500)+sk);   
  return;
}
