#include <ansi.h>
inherit F_SPELL;
inherit SSERVER;
void remove_effect (object me);
int conjure(object me, object target)
{
  int fun=me->query("spells/hardshell/level");
  if (!me->query("spells/hardshell/level"))
     return 0;
  if(me->query("class")!="taoist")
     return notify_fail ("只有道士能用这种法术！\n");
  if (me->query ("atman") < 50)
     return notify_fail ("你的灵力不足!\n");
  if ((int)me->query_temp ("hardshell", 1))
     return notify_fail ("你已经使用硬甲了。\n");
if( me->is_fighting() ) me->start_busy(1); //战斗中使用busy 一回

  message_vision ("$N使出奇门遁甲中的「硬甲护体”\n",me);
  me->add ("atman", -50);

       
  message_vision (HIG"$N的皮肤逐渐角质化，出现六角形的角质硬甲。\n"NOR, me);
  me->set_temp ("hardshell", 1);
me->start_call_out((: call_other, __FILE__, "remove_effect",me:),fun+10);
  return 1;
}

void remove_effect (object me)
{ 
  me->delete_temp ("hardshell");
  tell_object (me, NOR"一阵剧痛后，你的皮肤回复原来的形状了。\n"NOR);
        if( me->query("spells/hardshell/level") < 100 )
   spell_improved ("hardshell",random(700));
  if( me->query("kee") > 40)
   me->add("kee",-40);
  return;
}
