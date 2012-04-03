// break-kee.c
// 破穴指 : 注意:bleeding 次数, 所损内力, 和升级点数.
// 重新改写..by chan
// 分阶段降低对手的攻击力及防御力、内力.属特别武技
#include <ansi.h>
inherit F_FUNCTION;
inherit SSERVER;
void remove_effect(object target, int amount);
int perform(object me, object target)
{
   string msg,*name;
   object ob,weapon;
   int value,sk_lv,em_lv,level,skill,sub_force,hurt;
if( !target ) target = offensive_target(me);
if(!target) return notify_fail("你找不到敌人!!\n");
 if(!(weapon=me->query_temp("weapon"))
 ||      (string)weapon->query("skill_type")!="stabber" )
         return notify_fail("要有适合的武器才能用破穴针。\n");
if(me->query_skill("yu-needle",1)<60)
return notify_fail("你的七奇针诀程度不够，无法使用破穴指。\n");
if(!me->is_fighting(target))
return notify_fail("破穴指要在战斗中才能使用。\n");
if(me->query("family/family_name")!="银针门")
return notify_fail("这种武功只有银针门的门人才可以使用。\n");
if((int)me->query("force")<150)
return notify_fail("你的内力不够。\n");
if(target->query_temp("break-kee"))
return notify_fail("对方以经中了,破穴指了。\n");
 if(target->is_busy())
   level = 95;
 else
   level = 75;

 value = (int)query_function("break-kee");
 me->add("force",-150);
 sk_lv=me->query_skill("yu-needle",1);
 em_lv=target->query_skill("dodge"); //是算出enable dodge的值!!
 em_lv=em_lv /3;

message_vision("
"HIW"                 $N气贯全身，以浑厚的内力运起「"HIG"七奇针诀"HIW"－"HIR"破穴指"HIW"－”\n\n"NOR""
""HIC"                         $N将体内的真气凝聚于针，随即又使出～\n\n"NOR""
""HIW"                                  "HIY"ζ "HIW"影 "HIM"幻．"HIR"破 "HIG"穴 "HIC"针 "HIY"ζ\n\n"NOR""
""HIY"                         突然间～$N手中的针尖泛起一簇"HIR"红色星芒"HIW"～\n\n"NOR""
""HIW"                       只见$N身影身形百化，无数的"HIM"幻影"HIW"攻击着$n！！\n\n"NOR,me,target);
value=random(value);
sk_lv=random(sk_lv);
sub_force=target->query("force");
if(random(100)<level) {//对方若没有busy只有2成的成功率....有的话有七成 //提高命中率 by unfinished
if((value > 80) && (sk_lv > em_lv))
{
 message_vision(HIW"$N的破穴针,剌中了$n的膻中穴,身上的真气无法运行,使得攻击力、防御力、内力下降八成!!!\n" NOR,me,target);
 skill=80;
 message_vision(HIY"$N的破穴针,剌中了$n的膻中穴,劲力直透$n要害, 造成极大的伤害!!\n" NOR,me,target);
 hurt=target->query("max_kee")/10;
 if (hurt > 10000) hurt = 10000;  //用来辅助对付新区域的大型mob
 sub_force=(sub_force*80)/100;
 target->add_temp("apply/dodge",-skill);
 target->add_temp("apply/parry",-skill);
 target->add_temp("apply/attack",-skill);
 target->add("force",-sub_force);
 target->set_temp("break-kee",1);
 target->receive_damage("kee",hurt);
 call_out("remove_effect",10,target,skill);
          }
else if((value > 60) && (sk_lv > em_lv)) {
 message_vision(HIW"$N的破穴针,剌中了$n的膻中穴,身上的真气无法运行,使得攻击力、防御力、内力下降八成!!!\n" NOR,me,target);
 message_vision(HIY"$N的破穴针,剌中了$n的膻中穴,劲力直透$n要害, 造成极大的伤害!!\n" NOR,me,target);
 hurt=target->query("max_kee")/10;
 if (hurt > 8000) hurt = 8000;  //用来辅助对付新区域的大型mob
 skill=80;
 sub_force=(sub_force*80)/100;
 target->add_temp("apply/dodge",-skill);
 target->add_temp("apply/parry",-skill);
 target->add_temp("apply/attack",-skill);
 target->add("force",-sub_force);
 target->set_temp("break-kee",1);
 target->receive_damage("kee",hurt);
 call_out("remove_effect",10,target,skill);
          }
else if((value > 40) && (sk_lv > em_lv)) {
 message_vision(HIW"$N的破穴针,剌中了$n的巨阙穴,身上的真气无法运行,使得攻击力、防御力、内力下降六成!!!\n" NOR,me,target);
 message_vision(HIY"$N的破穴针,剌中了$n的膻中穴,劲力直透$n要害, 造成极大的伤害!!\n" NOR,me,target);
 hurt=target->query("max_kee")/10;
 if (hurt > 6000) hurt = 6000;  //用来辅助对付新区域的大型mob
 skill=60;
 sub_force=(sub_force*60)/100;
 target->add_temp("apply/dodge",-skill);
 target->add_temp("apply/parry",-skill);
 target->add_temp("apply/attack",-skill);
 target->add("force",-sub_force);
 target->set_temp("break-kee",1);
 target->receive_damage("kee",hurt);
 call_out("remove_effect",10,target,skill);
          }
else if((value > 20 ) && (sk_lv > em_lv)) {
 message_vision(HIW"$N的破穴针,剌中了$n的气海穴,身上的真气无法运行,使得攻击力、防御力、内力下降四成!!!\n" NOR,me,target);
 message_vision(HIY"$N的破穴针,剌中了$n的膻中穴,劲力直透$n要害, 造成极大的伤害!!\n" NOR,me,target);
 hurt=target->query("max_kee")/10;
 if (hurt > 4000) hurt = 4000;  //用来辅助对付新区域的大型mob
 skill=40;
 sub_force=(sub_force*40)/100;
 target->add_temp("apply/dodge",-skill);
 target->add_temp("apply/parry",-skill);
 target->add_temp("apply/attack",-skill);
 target->add("force",-sub_force);
 target->set_temp("break-kee",1);
 target->receive_damage("kee",hurt);
 call_out("remove_effect",10,target,skill);
// target->start_call_out( (: call_other, __FILE__, "remove_effect", target, skill:), skill/2);
          }
else {
 message_vision(HIW"$N的破穴针,剌中了$n的天突穴,身上的真气无法运行,使得攻击力、防御力、内力下降二成!!!\n" NOR,me,target);
 message_vision(HIY"$N的破穴针,剌中了$n的膻中穴,劲力直透$n要害, 造成极大的伤害!!\n" NOR,me,target);
 hurt=target->query("max_kee")/10;
 if (hurt > 2000) hurt = 2000;  //用来辅助对付新区域的大型mob
 skill=20;
 sub_force=(sub_force*20)/100;
 target->add_temp("apply/dodge",-skill);
 target->add_temp("apply/parry",-skill);
 target->add_temp("apply/attack",-skill);
 target->add("force",-sub_force);
 target->set_temp("break-kee",1);
 target->receive_damage("kee",hurt);
 call_out("remove_effect",10,target,skill);
     }
}
else
message_vision(MAG"$n急使轻功!!千均一刻之际!!避开$N的可怕攻击!!!\n"NOR,me,target); 

message_vision(HIR"$N使出破穴针后!!内劲损耗过大，赶紧运气调息。\n"NOR,me);
me->start_busy(1);
COMBAT_D->report_status(target, 1);
 value = (int)query_function("break-kee");
if(value < 100)
function_improved("break-kee",random(me->query("max_force")/15+me->query_skill("yu-needle",1)/2));
        return 1;
}

void remove_effect(object target, int skill)
{
if(!target) return ;
target->delete_temp("break-kee");
target->add_temp("apply/dodge",skill);
target->add_temp("apply/parry",skill);
target->add_temp("apply/attack",skill);
message_vision(HIY"$N被封住穴道慢慢解开了,所丧失的功力也慢慢恢复了!!!。\n"NOR,target);
}
