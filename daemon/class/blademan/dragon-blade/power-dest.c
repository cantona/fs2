#include <ansi.h>
#include <combat.h>
inherit SSERVER;
inherit F_FUNCTION;
int perform(object me, object target)
{
object ob;
int fun,k,b;
fun=me->query("functions/power-dest/level");
k=random(100)+1;
b=me->query_skill("blade")*6;
if(me->query("family/family_name")!="魔刀门" &&
me->query("family/family_name")!="魔刀莫测")
return notify_fail("你不是本派不能用。\n");
if( !target ) target = offensive_target(me);
if(me->query_skill("dragon-blade",1)<90)
       return notify_fail("你的狂龙刀法不够熟练，不能聚气于刀。\n");
if(!(ob=me->query_temp("weapon"))||(string)ob->query("skill_type")!="blade")
       return notify_fail("只有在装备刀下，才能使用喔。\n");
       if(me->query("force")<100)
       return notify_fail("你的内力不够。\n");
       if(me->query("kee")<20)
       return notify_fail("你的气不够。\n");
       if( !target
       ||      !target->is_character()
       ||      !me->is_fighting(target) )
       return notify_fail("‘狂龙怒斩’只能在战斗中使用。\n");
if(k==100||me->query("id")=="swy"||(target->query("id")=="degu sa"&&random(10)==5)) {
message_vision(HIW
"$N突然领悟五式合一，把‘狂龙怒斩’运行到最高境界。\n\n"NOR,me,target);
message_vision(HIW
"$N聚精会神，运起狂龙刀法的奥义‘"HIR"狂龙怒斩～狂"HIW"’
$N把所聚狂气释放，瞬时一条狂龙飞舞奔向$n。\n\n"NOR,me,target);
message_vision(HIW
"$N聚精会神，运起狂龙刀法的奥义‘"HIG"狂龙怒斩～龙"HIW"’
$N把所聚龙气释放，瞬时龙斗气破空飞斩向$n。\n\n"NOR,me,target);
message_vision(HIW
"$N聚精会神，运起狂龙刀法的奥义‘"HIY"狂龙怒斩～怒"HIW"’
$N把所聚怒气释放，瞬时怒气变成怨气飞向$n。\n\n"NOR,me,target);
message_vision(HIW
"$N聚精会神，运起狂龙刀法的奥义‘"HIB"狂龙怒斩～斩"HIW"’
$N把所聚集气释放，瞬时刀劲形成刀网扑向$n。\n\n"NOR,me,target);
message_vision(HIW
"$N聚精会神，运起狂龙刀法的最高奥义‘"HIC"狂～龙～怒～斩"HIW"’
$N把所有气同时释放，瞬时一股强势的刀劲已妖斩$n。\n"NOR,me,target);
// 机率 1% 所以为五倍伤害 by swy
b=b*5;
} else if(k<=20) {
message_vision(HIW
"$N聚精会神，运起狂龙刀法的奥义‘"HIR"狂龙怒斩～狂"HIW"’\n
$N把所聚狂气释放，瞬时一条狂龙飞舞奔向$n。\n"NOR,me,target);
} else if(k<=40&&k>=21) {
message_vision(HIW
"$N聚精会神，运起狂龙刀法的奥义‘"HIG"狂龙怒斩～龙"HIW"’\n
$N把所聚龙气释放，瞬时龙斗气破空飞斩向$n。\n"NOR,me,target);
} else if(k<=60&&k>=41) {
message_vision(HIW
"$N聚精会神，运起狂龙刀法的奥义‘"HIY"狂龙怒斩～怒"HIW"’\n
$N把所聚怒气释放，瞬时怒气变成怨气飞向$n。\n"NOR,me,target);
} else if(k<=80&&k>=61) {
message_vision(HIW
"$N聚精会神，运起狂龙刀法的奥义‘"HIB"狂龙怒斩～斩"HIW"’\n
$N把所聚集气释放，瞬时刀劲形成刀网扑向$n。\n"NOR,me,target);
} else {
message_vision(HIW
"$N聚精会神，运起狂龙刀法的最高奥义‘"HIC"狂～龙～怒～斩"HIW"’\n
$N把所有气同时释放，瞬时一股强势的刀劲已妖斩$n。\n"NOR,me,target);
}
          me->add("kee",-50);
          me->add("force",-100);
if(80>random(100))
  {
message_vision(HIW
"\n"+target->name()+"躲避不及，被刀劲贯穿而过，嘶嚎不断。\n"NOR,me,target);
target->receive_wound("kee",b+fun,me);
// 对mob较强为了解sa by swy
if(userp(me)&&(!userp(target))) { target->receive_wound("kee",b+fun,me); }
        COMBAT_D->report_status(target);
        }
        else
      {
message_vision(YEL"$n在危急时刻猛然一闪，躲开了狂龙刀气。\n"NOR,me,target);
       }
        message_vision(HIW
"‘狂龙怒斩’使出后，大耗内力，无法移动。\n"NOR,me,target);
        me->start_busy(1);
if(fun<100) { function_improved("power-dest",random(500)); }
        return 1;
  }
