//天皇惊天皇气.....一气镇山河
#include <ansi.h>
#include <combat.h>
inherit F_FUNCTION;
inherit SSERVER;
int fun;
int perform(object me, object target)
{
        string *ATTACK_MSG=({
WHT"              $N翩然而立，瞬间风卷残云，随即而出的乃是《惊天皇气》中的一式
                                  "BLINK+HIY"一气镇山河～之～惊天真气"NOR""WHT"
      只见$N由百汇升出袅袅金烟，随即四周方圆百里渐渐凝聚一道淡金色光芒，若隐逤现的闪烁着。
      接着$n身上即感到一股莫名的、强大的、不可摧的强撼压力，陇照着$n如影随形!!\n"NOR,
WHT"              $N翩然而立，瞬间风卷残云，随即而出的乃是《惊天皇气》中的一式
                                  "BLINK+HIR"一气镇山河～之～破天真气"NOR""WHT"
      只见$N由百汇升出袅袅金烟，随即四周方圆百里渐渐凝聚一道淡金色光芒，若隐逤现的闪烁着。
      接着$n身上即感到一股莫名的、强大的、不可摧的强撼压力，陇照着$n如影随形!!\n"NOR,
WHT"              $N翩然而立，瞬间风卷残云，随即而出的乃是《惊天皇气》中的一式
                                  "BLINK+HIY"一气镇山河～之～震天真气"NOR""WHT"
      只见$N由百汇升出袅袅金烟，随即四周方圆百里渐渐凝聚一道淡金色光芒，若隐逤现的闪烁着。
      接着$n身上即感到一股莫名的、强大的、不可摧的强撼压力，陇照着$n如影随形!!\n"NOR,
WHT"              $N翩然而立，瞬间风卷残云，随即而出的乃是《惊天皇气》中的一式
                                  "BLINK+HIG"一气镇山河～之～开天真气"NOR""WHT"
      只见$N由百汇升出袅袅金烟，随即四周方圆百里渐渐凝聚一道淡金色光芒，若隐逤现的闪烁着。
      接着$n身上即感到一股莫名的、强大的、不可摧的强撼压力，陇照着$n如影随形!!\n"NOR,
WHT"              $N翩然而立，瞬间风卷残云，随即而出的乃是《惊天皇气》中的一式
                                  "BLINK+HIG"一气镇山河～之～弥天真气"NOR""WHT"
      只见$N由百汇升出袅袅金烟，随即四周方圆百里渐渐凝聚一道淡金色光芒，若隐逤现的闪烁着。
      接着$n身上即感到一股莫名的、强大的、不可摧的强撼压力，陇照着$n如影随形!!\n"NOR,
WHT"              $N翩然而立，瞬间风卷残云，随即而出的乃是《惊天皇气》中的一式
                                  "BLINK+HIR"一气镇山河～之～焚天真气"NOR""WHT"
      只见$N由百汇升出袅袅金烟，随即四周方圆百里渐渐凝聚一道淡金色光芒，若隐逤现的闪烁着。
      接着$n身上即感到一股莫名的、强大的、不可摧的强撼压力，陇照着$n如影随形!!\n"NOR,
WHT"              $N翩然而立，瞬间风卷残云，随即而出的乃是《惊天皇气》中的一式
                                  "BLINK+HIW"一气镇山河～之～分天真气"NOR""WHT"
      只见$N由百汇升出袅袅金烟，随即四周方圆百里渐渐凝聚一道淡金色光芒，若隐逤现的闪烁着。
      接着$n身上即感到一股莫名的、强大的、不可摧的强撼压力，陇照着$n如影随形!!\n"NOR,
WHT"              $N翩然而立，瞬间风卷残云，随即而出的乃是《惊天皇气》中的一式
                                  "BLINK+HIC"一气镇山河～之～落天真气"NOR""WHT"
      只见$N由百汇升出袅袅金烟，随即四周方圆百里渐渐凝聚一道淡金色光芒，若隐逤现的闪烁着。
      接着$n身上即感到一股莫名的、强大的、不可摧的强撼压力，陇照着$n如影随形!!\n"NOR,
WHT"              $N翩然而立，瞬间风卷残云，随即而出的乃是《惊天皇气》中的一式
                                  "BLINK+HIM"一气镇山河～之～敝天真气"NOR""WHT"
      只见$N由百汇升出袅袅金烟，随即四周方圆百里渐渐凝聚一道淡金色光芒，若隐逤现的闪烁着。
      接着$n身上即感到一股莫名的、强大的、不可摧的强撼压力，陇照着$n如影随形!!\n"NOR,
WHT"              $N翩然而立，瞬间风卷残云，随即而出的乃是《惊天皇气》中的一式
                                  "BLINK+HIC"一气镇山河～之～护天真气"NOR""WHT"
      只见$N由百汇升出袅袅金烟，随即四周方圆百里渐渐凝聚一道淡金色光芒，若隐逤现的闪烁着。
      接着$n身上即感到一股莫名的、强大的、不可摧的强撼压力，陇照着$n如影随形!!\n"NOR,
WHT"              $N翩然而立，瞬间风卷残云，随即而出的乃是《惊天皇气》中的一式
                                  "BLINK+HIB"一气镇山河～之～敬天真气"NOR""WHT"
      只见$N由百汇升出袅袅金烟，随即四周方圆百里渐渐凝聚一道淡金色光芒，若隐逤现的闪烁着。
      接着$n身上即感到一股莫名的、强大的、不可摧的强撼压力，陇照着$n如影随形!!\n"NOR
        });
        int action,range,sur,k;
        int force_cost;
        object weapon;
        weapon= me->query_temp("weapon");
        fun=me->query("functions/surprising/level");
        sur=(int)(me->query_skill("surprise-ten",1));
        if(fun<=35) k=2;
        if(fun>=36&&fun<=89) k=5;
        if(fun>=90) k=10;
          range = (me->query_skill("surprise-ten",1)+me->query_function("surprising"))/10;
        if( range > sizeof(ATTACK_MSG) )
          range = sizeof(ATTACK_MSG);
          action = random(range);
          //six = (me->query_skill("surprise-ten",1))/10;
          force_cost = 500;
        if( sur<=90 )
          return notify_fail("你所学的惊天十式未达炉火存菁之境界。\n");
        if( !me->is_fighting(target) )
          return notify_fail("你只能在战斗中使出「一气镇山河”。\n");
        if( target == me )
          return notify_fail("不能对付自己呀!!\n");
        if( me->query("force") < 3000 )
          return notify_fail("你的内力不够。\n");
        if(weapon&&weapon->query("skill_type")!="unarmed")
          return notify_fail("'鸡丝'不对喔。\n");
        if( !target )
          target = offensive_target(me);
        if(target->is_busy())
          return notify_fail("一气镇山河无法用在忙乱中的人\n");
/*暂时不限门派
      if(me->query("family/family_name")!="段家")
      return notify_fail("不是段家不能用。\n");
*/
          message_vision("\n"+ATTACK_MSG[action]+"\n",me,target);
if(95>random(100))
        {
          message_vision(HIW"$n给$N强大的气劲所镇锁住了，脸上露出极痛苦的神情，无奈动弹不得!!!\n"NOR,me,target);
          target->start_busy(k);
            if ( (random(10) >9 ) && me->query("force_factor",1) > 9)
            {
          message_vision(HIR"$N见天赐良机，运足真气、潇洒飘逸的朝$n快攻而去!!!\n"NOR,me,target);
          me->set_temp("super",1);
            }
          if(me->query_function("surprising")<100)
            {
function_improved("surprising",random(500));
            }
        }
        else
        {
          message_vision("可惜被$n闪过了..\n",me);
      if(me->query_function("surprising")<100)
            {
        function_improved("surprising",random(800));
            }
        }
        me->add("force",-force_cost);
        me->start_busy(1);
        return 1;
}
