///寒冰烈火劲
#include <ansi.h>
inherit F_FUNCTION;
inherit SSERVER;
int perform(object me, object target)
{
        int g,force;
        g = me->query_skill("gforce");
        force = me->query("force");
        if( !me->query("marks/ice-fire"))
                return notify_fail("不管你如何运气,就是使不出来寒冰烈火劲。\n");
        if( me->query("family/family_name")!="天道派")
        return notify_fail("你忽冷忽热,开始发羊癫疯!\n");
        if( me->query_skill_mapped("force")!="gforce" )
        return notify_fail(HIY"hmm ～ 你用的是什么心法啊!。\n"NOR);
        if( me->query_skill("gforce",1)<50 )
                return notify_fail("你的紫星河还不够纯熟。\n");
        if( force<200 )
                return notify_fail("你的内力不足以运起寒冰烈火劲。\n");
        if( !target ) target = offensive_target(me);
     if(target->is_busy())
     return notify_fail("敌人 BUSY 中，快攻击吧！\n");
      message_vision(HIB+
"              $N怒气狂提，不顾身上的伤口，不断地将内力运至十二成。\n        
                          "HIR"$N身上发出一股强大的杀意\n
                 "HIY"$N的全身开始聚起强烈的"HIW"寒冰"HIW"与"HIR"烈火"HIY"两道环身气劲，\n
                   "HIW"～ 两道气劲源源不断的向手上凝聚！ ～\n
                              "HIY"倏地$N大喝一声\n
              "HIY"左手使出一招"RED"天书"MAG"绝学"HIY"中之终极奥义 - -"HIW"寒 冰 劲"HIY"－-\n
              "HIC"右手一翻使出"RED"天书"MAG"绝学"HIC"中之武学秘技 ～～"HIR"烈 火 劲"HIC"～～ \n　
                  "HIB"只见寒冰与烈火两道气劲如狂风暴雨般地击向对手\n
                     "HIW"此乃天书之不秘之传"HIC" ‘"HIW"寒冰"HIR"烈火"HIW"劲"HIC"’\n"+NOR,me,target);

        me->add("force", -g*2);
 if(random(g)>random(target->query_skill("dodge",1)))
               {
   target->start_busy(2);
 target->add("kee",-2*g);
 target->apply_condition("blockade",3);
                message_vision(HIR"$n闪躲不及,被寒冰烈火两道气劲透体而过,全身上下被烈火及寒冰包围着,不停的嘶吼!\n"NOR,me,target);
                COMBAT_D->report_status(target);
               }
       else
               {
                message_vision(HIM"$n急运内功，消解了$N寒冰及烈火这两道的气劲。\n"NOR,me,target);
               }
        me->start_busy(1);
        return 1;
}


