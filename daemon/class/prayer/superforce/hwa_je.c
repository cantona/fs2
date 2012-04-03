#include <ansi.h>
inherit F_FUNCTION;
inherit SSERVER;
void remove_effect (object me);
int exert(object me, object target)
{
int fun,fun1,fun2,fun3,fun4,fun5;
fun=me->query("functions/hwa_je/level");
fun1=me->query("functions/black/level");
fun2=me->query("functions/bluesea/level");
fun3=me->query("functions/goldsun/level");
fun4=me->query("functions/blood/level");
fun5=me->query("functions/green/level");
if( fun1 < 50 ) return notify_fail ("你的玄浑沌等级不足。\n");
if( fun2 < 70 ) return notify_fail ("你的靛沧海等级不足。\n"); 
if( fun3 < 90 ) return notify_fail ("你的金晨曦等级不足。\n");  
if( fun4 < 110 ) return notify_fail ("你的血穹苍等级不足。\n");  
if( fun5 < 130 ) return notify_fail ("你的玄宇宙等级不足。\n");
if(me->query("class")!="prayer")
          return notify_fail("你的职业无法使用此技能。\n");
  if (me->query ("force") < 50)
     return notify_fail ("你的内力不足!\n");
  if ((int)me->query_temp ("hwa_je", 1))
     return notify_fail ("你已经使用化劫了。\n");
  if(me->is_fighting() && !wizardp(me)) me->start_busy(1);
  message_vision ("$N使出玄宇宙中的「化劫”\n",me);
  me->add ("force", -50);
  message_vision (HBRED+HIC"$N的身体散发出一股蓝光，在身体的外层布满了气劲!!。\n"NOR, me);
  me->set_temp ("hwa_je", 1);
  me->start_call_out((: call_other, __FILE__, "remove_effect",me:),fun+10);
  return 1;
}
void remove_effect (object me)
{
  me->delete_temp ("hwa_je");
  tell_object (me, HBGRN+HIY"在你身旁的护身真气逐渐消散于空气之中了!!。\n"NOR);
  if( me->query("functions/hwa_je/level") < 100 )
     function_improved ("hwa_je",random(500));
  if( me->query("kee") > 40)
        me->add("kee",-40);
  return;
}
