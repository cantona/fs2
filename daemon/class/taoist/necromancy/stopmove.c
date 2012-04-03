#include <ansi.h>
inherit F_SPELL;
int cast(object me,object target)
{   
   int mkee=me->query("max_kee");
   if(me->query("class") != "taoist")
         return notify_fail("这法术只有道士用的出来！！\n");
   if(!me->is_fighting(target))
         return notify_fail("血灵缚只能在战斗中使用。\n");
   if(target->is_busy())
   return notify_fail("敌人 busy 中。\n");
   if( !me->query("spells/stopmove/level") )
         return 0;
   if(me->query("atman") < 300)
         return notify_fail("你的灵力不足。\n");
   if(me->query("mana") < 300)
         return notify_fail("你的法力不足。\n");
   me->start_busy(1);
   me->add("atman",-300);
   me->add("mana",-300);   
  if( mkee=mkee/5 > 100 )
  mkee = 120;
   me->add("kee",-mkee);
   message_vision(RED"\n\n$N将自己的热血洒向四周，$N全身一时虚脱动弹不得!!\n"NOR,me);
me->start_call_out((: call_other, __FILE__, "test2",me,target:),1);
  return 1;
}

void test2(object me,object target)
{
   if(!target) return;
   if( 80 > random(100) )
   {
     message_vision(HIG"\n\n\n四周的血气缓缓地升起～～～～～～\n\n"+
        "       逐渐幻化成无数的龙形向附近的人缠去！！！\n\n\n"NOR,me);
     target->start_busy(3);
   }
    else {
      message_vision(HIW"\n$N等了半天，结果什么事也没发生！！\n\n"NOR,me);
   }
  return;
}
