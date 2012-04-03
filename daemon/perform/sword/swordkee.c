#include <combat.h>
#include <ansi.h>
inherit SSERVER;
inherit F_FUNCTION;
int perform(object me, object target)
{
   object *enemy,weapon;
   int damage,i,fun;
   object victim;
   victim=this_player()->enemy();
   enemy=me->query_enemy();
   i=sizeof(enemy);
   fun=me->query("functions/swordkee/level");
if(me->query("class") != "swordsman")
  return notify_fail("你的职业无法使出剑气。\n");
if( me->query("force") < 250)
  return notify_fail("你的内力不够。\n");
if( me->query_skill("sword",1) < 70 )
  return notify_fail("你的基本剑术太差了。\n");
if( !me->is_fighting() )
  return notify_fail("剑气要战斗中才能使用。\n");
if(!objectp(weapon=me->query_temp("weapon")) || (string)weapon->query("skill_type")!="sword")
  return notify_fail("要有剑才能发剑气。\n");
if(fun==100) 
 {
    message_vision(HIC"$N大喝一声发出所有剑气!!!\n\n"HIB"一招"HIR"剑气"HIW"破敌"HIY"---"HIG"  ‘"HIR"石破天惊"HIG"’!!!\n\n"NOR,me);
damage=me->query_skill("sword",1)*7+random(200);
 }
else if(fun<=20) 
 {

message_vision("[1;30m$N将内力贯注在剑上，猛然一挥, 只挥出几道零星的剑气！[0m\n",me);
    damage=me->query_skill("sword",1);
 }
else if(fun<=40&&fun>=21) 
 {
    message_vision("[1;31m$N将内力贯注在剑上，猛然一挥，数道剑气腾出, 并分击在场各个敌人！[0m\n",me);
    damage=me->query_skill("sword",1)*3/2;
 }
else if(fun<=60&&fun>=41) 
 {
    message_vision("[1;34m$N将内力贯注在剑上，猛然一挥，数十道剑气腾出，剑气分别射向四面八方！[0m\n",me);
    damage=me->query_skill("sword",1)*2;
 }
else if(fun<=80&&fun>=61) 
 {
    message_vision("[1;32m$N将内力贯注在剑上，猛然一挥，只见一道耀眼的青铜剑气腾出直逼在场所有生物！[0m\n",me);
    damage=me->query_skill("sword",1)*3;
 }
else if(fun>=81&&fun<=99) 
 {
    message_vision("[1;33m$N将内力贯注在剑上，猛然一挥，黄金剑气顿时笼罩全身, 并向外扩散分击各对手！[0m\n",me);
   damage=me->query_skill("sword",1)*4;
 }
  me->add("force",-50);
  me->start_busy(1);
  while(i--) {
  if(!me || !enemy[i]) continue;
if(environment(me)!=environment(enemy[i])) continue;   
    if(random(me->query_skill("sword"))*10>enemy[i]->query_skill("dodge")+enemy[i]->query_skill("parry"))
      {
        enemy[i]->receive_wound("kee",damage);
        message_vision(HIR"$N闪躲不及，剑气已在其身上划出一道血淋淋的伤痕！\n"NOR,enemy[i]);
        enemy[i]->start_busy(1);
        COMBAT_D->report_status(enemy[i],1);
      }
    else 
{
message_vision(YEL"$N侧身一闪，避开了剑气！\n"NOR,enemy[i]);
}
          }
if(fun<100) { function_improved("swordkee",random(300)); }
return 1;
}

