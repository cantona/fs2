
#include <ansi.h>
#include <combat.h>
inherit SSERVER;
int perform(object me, object target)
{
string msg;
object ob;
string *name;
if( !target ) target = offensive_target(me);
if(me->query_skill("gforce",1)<100)
return notify_fail("你的紫星河心法不够熟练 , 不能凝神聚气。\n");
if(!(ob=me->query_temp("weapon"))||(string)ob->query("skill_type")!="unarmed")
return notify_fail("只有在装备武器时，才能使用啦。\n");
       if(me->query("force")<300)
       return notify_fail("你的内力不够。\n");
if(me->query("class")!="taoist")
return notify_fail("歹势!! 你不是道士，所以不能用天罡\战气。\n");
if( me->query_skill_mapped("dodge")!="g-steps")
return notify_fail("你没有用追星步法。\n");
       if(me->query("kee")<150)
       return notify_fail("你的气不够。\n");
       if(me->query("combat_exp")<300000)
return notify_fail("你的经验值不足 , 无法领悟天罡\战气。\n");
       if( !target
       ||      !target->is_character()
       ||      !me->is_fighting(target) )
return notify_fail("天罡\战气只能在战斗中使用。\n");
message_vision(""HIY"$N气贯全身,以浑厚的内力气通任督二脉\n"NOR""
  ""HIC"                 $N全身散发出一道道强大盛大的气流\n"NOR""
  ""HIW"        $N周边的气流逐渐聚集在四周,渐渐在身边围绕成一气团\n"NOR""
 ""HIG"                $N身形倏然跋起,在半空中环旋了三周半\n"NOR"",me,target);

message_vision(HIW"          只见$N翻身俯冲－－$N有如一气柱往"+target->query("name")+"俯冲---\n
                 $N使用的招式乃是紫星河心法之
                      *  仙风云体术  *

 "HIR"                     ‘ 天 罡\ 战 气 ’\n"NOR,me,target);
me->add("kee",-20);
me->add("force",-150);
if(random(me->query_skill("unarmed")-10)>random(target->query_skill("force")+10))
  {
        message_vision(
"\n"+target->name()+HIC"来不及反应，已被$N狠狠的贯穿而过，痛苦万分。\n"NOR,me,target);
        message_vision( NOR,me);
target->receive_wound("kee",me->query_skill("g-steps",1)*3);
        COMBAT_D->report_status(target);

        }
        else
      {
message_vision(YEL"$n在直觉反应下猛然一闪，躲开了攻击。\n"NOR,me,target);
       }
        message_vision(HIW
"使出‘天罡\战气’后，大耗体力，要先休息一下。\n"NOR,me,target);
        me->start_busy(2);
        message_vision( NOR,me);
        return 1;
  }
 
