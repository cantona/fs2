#include <ansi.h>
inherit F_SPELL;
inherit SSERVER;
int fun;
int conjure(object me, object target)
{
        string msg;
fun=me->query("spells/firedance/level");
     if (!me->query("spells/firedance/level"))
     return 0;

        if( !target ) target = offensive_target(me);
        if(!target) return notify_fail("你找不到敌人!!\n");
        if(!me->is_fighting(target) )
        return notify_fail("这法术只能对战斗中的对手使用。\n");

if(me->query("family/family_name")!="夜梦小筑")
return notify_fail("只有舞者才能使用。\n");
        if((int)me->query("atman") < 150)
                return notify_fail("你的法力不够！\n");

        if((int)me->query("gin") < 10 )
                return notify_fail("你的精神没有办法有效集中！\n");

        me->add("atman", -150);
        me->receive_damage("gin", 10);

         write("[1;32m\n            妳领悟了夜梦天舞及梦玄法鉴的精髓，预备施展[1;31m火凤飞翔[1;32m之术。\n[0m");
         msg = HIC "\n                   $N的身体渐渐的被火焰包围，而$N的身形也渐" NOR;
         msg += HIY "\n                     渐的幻化为一只凤凰，只见一只火凤凰迅速的" NOR;
         msg += HIG "\n                       向着$n飞去，令$n不及招架。\n\n" NOR;
         message_vision(msg, me, target);
        if( 80 > random(100) ) {
                        write("[1;32m\n                     结果成功的施展出火凤飞翔。\n[0m");
                        say( "[1;31m                     "+target->query("name")+"闪躲不及，浑身上下都着了火，痛苦异常!!\n[0m");
         target->receive_damage("kee",(fun*9+250),me);
                 target->apply_condition("burn",random(15) +fun/10);
                        if ( fun < 100)
                          me->spell_improved("firedance",random(700));
        } else {
                write("[1;31m\n                     结果丝毫起不了作用令妳暗自惋昔。 \n[0m");
                say( "[1;32m               只见"+target->query("name")+"以迅雷不及掩耳之速闪过攻击。\n[0m");
                         if (fun < 100)
                         me->spell_improved("firedance",random(700));
}

        COMBAT_D->report_status(target);

me->start_busy(1);
        return 1;
}

