#include <ansi.h>
inherit F_SPELL;
inherit SSERVER;
int fun;
int conjure(object me, object target)
{
        string msg;
        int k;
	fun=me->query("spells/confuse/level");
	if(fun<=35) k=1;
	if(fun>=36&&fun<=70) k=2;
	if(fun>=71) k=3;
     if (!me->query("spells/confuse/level"))
     return 0;
        if( !target ) target = offensive_target(me);

        if(!target) return notify_fail("你找不到敌人!!\n");
        if(!me->is_fighting(target))
                return notify_fail("梦幻之舞唯在战斗中才能使用。\n");

  if( target->is_busy() )
 return notify_fail("你的法术正迷幻着敌人，继续攻击吧!\n");

if(me->query("family/family_name")!="夜梦小筑")
return notify_fail("只有舞者才能使用。\n");
        if((int)me->query("atman") < 75 )
                return notify_fail("你的法力不够！\n");
        if((int)me->query("gin") < 30 )
                return notify_fail("你的精神没有办法有效集中！\n");

        me->add("atman", -70);
        me->receive_damage("gin", 10);

         write("[1;32m\n                    妳忽然领悟了夜梦天舞中梦幻之舞的绝学。\n[0m");
         msg = HIC "\n                     $N忽然翩然起舞，眼前只见$N那美丽的身影幻" NOR;
         msg += HIC "\n                     化出无数美妙的舞步，令人看得如痴如醉，好" NOR;
         msg += HIC "\n                          似天仙下凡，犹如身处幻梦之中。\n\n" NOR;
         message_vision(msg, me, target);
if(80>random(100)) {
                        write("[1;32m\n                     结果成功的施展出梦幻之舞。\n[0m");
                        say( "[1;35m                     "+target->query("name")+"露出如痴如醉的表情，整个人像失了魂似的!!\n[0m");
                        target->start_busy(k);
                        me->improve_skill("dremagic", 1, 1);
                        if ( fun < 100)
                        me->spell_improved("confuse",random(1000));
                } else {
                write("[1;31m\n                     结果丝毫起不了作用令妳暗自惋昔。 \n[0m");
                say( "[1;32m                     但是"+target->query("name")+"丝毫不为所动。\n[0m");
                if ( fun < 100)
                me->spell_improved("confuse",random(1000));

}

        COMBAT_D->report_status(target);
        return 1;
}

