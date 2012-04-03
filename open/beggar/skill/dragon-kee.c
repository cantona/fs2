//dragon-kee.c
//降龙劲 by Dico

#include <ansi.h>
 inherit F_FUNCTION;
 inherit SSERVER;
 inherit F_CLEAN_UP;

 int perform(object me, object target)
 {
  int skill,funlv,siseforce,temp;

  if(me->query("force")<50+(int)query_function("dragon-kee")*5)
        return notify_fail("你的内力不够，无法运起降龙劲气。\n");
  if(me->query("family/family_name") != "丐帮")
        return notify_fail("你不是丐帮弟子，无法驾驭降龙劲气。\n");
  if((string)me->query_skill_mapped("unarmed") != "dragonfist")
        return notify_fail("降龙劲气必须配合降龙绝学方可发挥。\n");
  if(me->query_temp("dragon-kee")==1)
        return notify_fail("你已经在用了。\n");

  temp=me->query("functions/dragon-kee/level","dragon-kee");
  skill = temp;
  siseforce=me->query_skill("siseforce",1);
  funlv=(int)me->query("functions/snow-powerup/level");
  me->add("force",-(50+skill*3));
  me->set_temp("dragon-kee",1);

  if(skill < 25)
  {
   message_vision(
"               $N运起洗髓经第一层功力"HIW"－＝"HIR"□游－龙－劲□"HIW"＝－"NOR
"               只见一道游龙之气从$N的灵台穴窜出，使$N的力量源源不绝\n",me);
         me->add_temp("apply/attack",skill);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill :), skill);
         if( me->is_fighting() ) me->start_busy(3);
         if(skill < siseforce)
         function_improved("dragon-kee",random(skill*20)+100);
         return 1;
  } else if ( skill < 50 )
  {
  message_vision(
"               $N运起洗髓经第二层功力"HIW"－＝"HIG"□怒－龙－劲□"HIW"＝－"NOR
"               怒龙之气从$N的后顶、风池两穴爆出，使$N的内劲有如狂涛般一波强似一波\n",me);
         me->add_temp("apply/attack",skill);
         me->add("force_factor",skill/10);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill :), skill);
         if( me->is_fighting() ) me->start_busy(3);
         if(skill < siseforce )
         function_improved("dragon-kee",random(skill*18)+100);
         return 1;
  } else if ( skill < 75 )
  { 
   message_vision(
"                $N运起洗髓经第三层功力"HIW"－＝"HIY"□狂－龙－劲□"HIW"＝－"NOR
"                $N只觉全身内力游走迅速，一瞬间，狂龙之气从百会、风府、大椎、神道四穴射出，使你拥有排山倒海的劲气\n",me);
         me->add_temp("apply/attack",skill);
         me->add("force_factor",skill/10);
         me->add_temp("apply/defense",skill);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill :), skill);
         if( me->is_fighting() ) me->start_busy(3);
         if(skill < siseforce )
         function_improved("dragon-kee",random(skill*16)+100);
         return 1;
  } else if ( skill >= 100 )
  {
   message_vision(
"                $N运起洗髓经最上乘功力"HIW"－＝"HIB"□降－龙－劲□"HIW"＝－"NOR
"                $N以毕生功力打通全身的奇经八脉，只见降龙气劲从天而降护住$N全身要穴\n",me);
         me->add_temp("apply/attack",skill);
         me->add("force_factor",skill/10);
         me->add_temp("apply/defense",skill);
         me->add_temp("apply/unarmed",skill);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill :), skill);
         if( me->is_fighting() ) me->start_busy(3);
         if(skill < siseforce )
         function_improved("dragon-kee",random(skill*14)+100);
         return 1;
  }
 } 
 
 void remove_effect(object me, int skill)
 { 
  me->delete_temp("dragon-kee");
  message_vision("$N的"HIC"降龙劲"NOR"开始崩溃涣散了。\n"NOR,me);
  if(skill<25)
  {
  me->add_temp("apply/attack",-skill);
  } else if(skill<50)
  {
  me->add_temp("apply/attack",-skill);
  me->set("force_factor",10);
  } else if(skill<75)
  {
  me->add_temp("apply/attack",-skill);
  me->set("force_factor",10);
  me->add_temp("apply/defense",-skill);
  } else
  {
  me->add_temp("apply/attack",-skill);
  me->set("force_factor",10);
  me->add_temp("apply/defense",-skill);
  me->add_temp("apply/unarmed",-skill);
  }
 }

