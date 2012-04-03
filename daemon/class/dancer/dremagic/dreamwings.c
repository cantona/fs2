#include <ansi.h>
inherit F_SPELL;
inherit SSERVER;
int fun;
void remove_effect (object me);
int conjure(object me, object target)
{
fun=me->query("spells/dreamwings/level");
if (!me->query("spells/dreamwings/level"))
     return 0;
  if (me->query ("atman") < 50)
     return notify_fail ("你的灵力不足!\n");
  if ((int)me->query_temp ("mana_shield", 1))
     return notify_fail ("你已经使用幻梦之翼了。\n");
  if ((int)me->query_temp ("mana_shield2", 1))
     return notify_fail ("你已经使用幻梦之翼了。\n");
  if ((int)me->query_temp ("mana_shield3", 1))
     return notify_fail ("你已经使用幻梦之翼了。\n");
  if ((int)me->query_temp ("mana_shield4", 1))
     return notify_fail ("你已经使用幻梦之翼了。\n");

if( me->is_fighting() ) me->start_busy(1); //在战斗中使用,要busy自己一回合 by chan

  message_vision ("$N使出梦玄法鉴中的"HIC"「幻梦之翼”"NOR"\n",me,target);
  me->add ("atman", -50);

       
  message_vision (HIG"$N感到有一股神秘的力量保护着自己。\n"NOR, me,target);
// 设这个mark后就有manashield 了
  if(me->query("class")=="dancer")
  {
   me->set_temp ("mana_shield", 1);
   }
   else if(me->query("class")=="fighter")
  {
  me->set_temp ("mana_shield3", 1);
  }
  else if (me->query("family/family_name")=="魔刀莫测")
  {
  me->set_temp ("mana_shield4", 1);
  }
  else {me->set_temp ("mana_shield2", 1);}
me->remove_call_out((:call_other, __FILE__, "remove_effect",me:));
if(me->query("class")=="dancer")
{
  me->start_call_out((: call_other, __FILE__, "remove_effect",me:),fun+20);
}
else if(me->query("class")=="fighter")
{
me->start_call_out((: call_other, __FILE__, "remove_effect",me:),fun/2+10);
}
else 
{
me->start_call_out((: call_other, __FILE__, "remove_effect",me:),fun/2+20);
}
  return 1;
}

void remove_effect (object me)
{
// 删除 manashield   
int fun=me->query("spells/dreamwings/level");
  me->delete_temp ("mana_shield");
   me->delete_temp("mana_shield2");
   me->delete_temp("mana_shield3");
   me->delete_temp("mana_shield4");
  tell_object (me, NOR"妳觉得自己变虚弱了。\n"NOR);
  if(fun<100) spell_improved("dreamwings",random(500));   
  return;
}
