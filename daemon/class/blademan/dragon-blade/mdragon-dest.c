// mdragon-dest.c
// 依FS气变多作修正
// 改板 by swy
#include <ansi.h>
#include <combat.h>
inherit SSERVER;
inherit F_FUNCTION;
int perform(object me, object target)
{
   object *enemy,ob;
   int i,fun,k,j;
   fun=me->query("functions/mdragon-dest/level");
   enemy=me->query_enemy();
   i=sizeof(enemy);
   k=random(3)+1;
if(me->query("family/family_name")!="魔刀门" &&
me->query("family/family_name")!="魔刀莫测")
return notify_fail("你不是本派不能用。\n");
   if(me->query_skill("dragon-blade",1)<105)
      return notify_fail("你的狂龙刀法不够熟练，不能聚气于刀。\n");
   if(!(ob=me->query_temp("weapon"))||(string)ob->query("skill_type")!="blade")
      return notify_fail("只有在装备刀下，才能使用喔。\n");
   if(me->query("force")<100)
      return notify_fail("你的内力不够。\n");
   if(me->query("kee")<20)
      return notify_fail("你的气不够。\n");
   if(!me->is_fighting())
      return notify_fail("‘魔龙诀’只能在战斗中使用。\n");
   me->start_busy(1);
   message_vision("\n$N大喝一声使出‘"+HIM+"魔龙诀"+NOR+"’\n",me);
   message_vision(HIB+@LONG
                                                      ____
          ___                                      .-~. /_"-._
         `-._~-.                                  / /_ "~o\  :Y
             \  \                                / : \~x.  ` ')
              ]  Y                              /  |  Y< ~-.__j
             /   !                        _.--~T : l  l<  /.-~
            /   /                 ____.--~ .   ` l /~\ \<|Y
           /   /             .-~~"        /| .    ',-~\ \L|
          /   /             /     .^   \ Y~Y \.^>/l_   "--'
         /   Y           .-"(  .  l__  j_j l_/ /~_.-~    .
        Y    l          /    \  )    ~~~." / `/"~ / \.__/l_
        |     \     _.-"      ~-{__     l  :  l._Z~-.___.--~
        |      ~---~           /   ~~"---\_  ' __[>
        l  .                _.^   ___     _>-y~
         \  \     .      .-~   .-~   ~>--"  /
          \  ~---"            /     ./  _.-'
           "-.,_____.,_  _.--~\     _.-~
                               `. ~(
                                 )  \
                                /,`--'~\--'~\
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

LONG +NOR,me);
   me->add("kee",-50);
   me->add("force",-100);
   for(j=0; j<i; j++)
   {
    if(!me || !enemy[j]) continue;
if(environment(me)!=environment(enemy[j])) continue;  
      if(80>random(100))
      {
message_vision(HIR+enemy[j]->name()+"被其景象摄住，惨遭魔龙穿体而过。\n"+NOR,me,enemy[j]);
            enemy[j]->receive_wound("kee",me->query_skill("blade")*3+fun,me);
            enemy[j]->receive_damage("sen",fun*3+50,me);
            enemy[j]->receive_damage("gin",fun*3+50,me);
if(!enemy[j]->is_busy()) { enemy[j]->start_busy(k); }
// 对mob较强为了能解sa by swy
if(userp(me)&&(!userp(enemy[j]))) { enemy[j]->receive_wound("kee",me->query_skill("blade")*3+fun,me); }
if(userp(me)&&(!userp(enemy[j]))) { enemy[j]->start_busy(2); }
if(me->query("m_blade")==1 &&
   me->query_temp("mblade")!=1 &&
   me->query_temp("mblade2")!=1 &&
   me->query_temp("mblade3")!=1) {
               me->set_temp("mblade",1); }
            COMBAT_D->report_status(enemy[j],1);
         }
      else
         message_vision(YEL"$n在危急时刻猛然一闪，躲开了魔龙刀气。\n"NOR,me,enemy[j]);
   }
   message_vision(HIW"‘魔龙诀’使出后，大耗真气，气息紊乱。\n"NOR,me);
   if(fun<100) 
       function_improved("mdragon-dest",random(500)); 
   return 1;
}
