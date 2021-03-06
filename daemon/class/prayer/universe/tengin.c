// 天惊地动 by xman
// 配合universe里的sp1到sp5所写,目的是用来决定发哪一招以及威力多大
// 等级越高越高,能用的招数越多,伤害越大(而且大很多:p)
#include <combat.h>
#include <ansi.h>
inherit F_FUNCTION;
inherit SSERVER;
inherit F_CLEAN_UP;
void tengin(object me, object target);
int perform(object me, object target)
{
        int lv,a,damage;
        lv = me->query("functions/tengin/level",1);
		if(me->query("class")!="prayer")
          return notify_fail("你的职业无法使用此技能。\n");
        if( !me->query("marks/tengin"))
          return notify_fail("你妄催功力, 试图凝聚天地之气, 可是什么事情也没发生。\n");
        if( me->query_skill("universe",1)<120 )
          return notify_fail("你的先天乾坤功还只有幼稚园的程度。\n");
        if( me->query("force")<500 )
          return notify_fail("你的内力不足, 无法凝聚天地之气。\n");
        if( !target )
          target = offensive_target(me);
        if( !me->is_fighting(target) )
          return notify_fail("天惊地动只能在战斗中使用。\n");
        if(!target) return notify_fail("你找不到敌人!!\n");
        message_vision(HIY"

                突然之间, 地面发生强大的地震, 震力强猛, 所有的人
                被震得东歪西倒, 只见$N手指天地, 使出"HIW"

                    ‘先天乾坤功’"HIR"
                                    第七绝"HIW"
                                            ‘"HIC"天"HIG"惊"NOR+YEL"地"HIB"动"HIW"’"HIY"

                此招乃引动九天之威与九地之气结合而成, 甫一施展, 
                四周旋风乱卷, 岳动山摇, 施展者身形如陀螺急速旋转
                乾坤阴阳卦象隐然而出, 劲风凛冽, 气劲急剧递增, 仿
                如巨龙狂舞, 将四周的漩涡气流不断地聚集扩大!!"NOR"\n\n",me,target);

  damage = 300+lv*20;
  if(80 > random(100))
        {
          me->set_temp("tengin",me->query("env/天惊地动"));
          me->set_temp("tengin_power",damage);
          target->start_busy(1);
          message_vision(HIW"\n
                不久, 九天之气从天上疾旋而下, 九地之气从地面飞舞
                而上, 两股漩涡气流交接, 汇流成磅礴无比的气势!!"NOR"\n\n",me,target);
        }
        else
        {
          message_vision(HIR"\n
                $N无法控制源源不绝的天地之气在体内狂窜, 只好强行
                收功, 然而身体已受了严重的内伤!!"NOR"\n\n",me,target);
        }
        me->start_busy(1);
        if( lv < 100 )
        function_improved("tengin",random(500));
        return 1;
}

