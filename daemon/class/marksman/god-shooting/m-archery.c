// 射手乱箭特攻 by swy
#include <ansi.h>
inherit SSERVER;
inherit F_FUNCTION;
int perform(object me, object target)
{
        int fun,stat=0,a,b,c,d,fun1,fun2,k;
        int skill,kk,exp;
        object ob;
if(me->query("class")!="marksman"&&me->query("id")!="swy")
return notify_fail("你的职业无法使用此技能。\n");
        skill=me->query_skill("archery",1);
        kk=me->query("functions/ten_kee/level");
        exp=me->query("combat_exp");
fun=me->query("functions/m-archery/level");
if(!(ob=me->query_temp("weapon"))||(string)ob->query("skill_type")!="archery")
return notify_fail("要装备弓才能用吧。\n");
if( skill < 120 )
return notify_fail("你的基本箭术不够。\n"); 
if( kk != 100 )
return notify_fail("你的十万火急不够。\n"); 
if( exp < 5000000 && me->query("id")!="master lee" )
return notify_fail("你的经验值不够。\n"); 
        if( !me->is_fighting() )
        return notify_fail("乱箭齐发只能在战斗中才能使用。\n");
        if(!target) target = offensive_target(me);
        if(!target) return notify_fail("找不到敌人!!\n");
        if( target == me )
        return notify_fail("不能对付自己呀!!\n");
        if( me->query("force") < 500)
        return notify_fail("你的内力不够。\n");
        a = target->query_temp("over/right");
        b = target->query_temp("over/left");
                c = target->query_temp("over/r-eyes");
                d = target->query_temp("over/l-eyes");
                fun1 = target->query_temp("hand-all");   
                fun2 = target->query_temp("eyes-all");   
                                k=random(2);
                                if(fun2) k=1;
                stat = a+b+c+d;
        if(stat==4) return notify_fail("敌人已经双眼失明和双手受伤了!\n");
        me->add("force",-500);
        message_vision(HIY"$N使出「流星箭法”中的奥义，霎时风云变色狂风四起!\n"NOR,me);
                message_vision(HIC"只见$N取出数十支箭往弓上一架，往$n发劲射出!\n"NOR,me,target);
                if(fun+5 > random(150) || me->query("id")=="swy" ) { 
                if(k && !fun1) {
                                if( !target->query_temp("over/right") ) {
                message_vision(HIR"乱箭飞射，射中了$N右手，顿时失去一半伤害力!\n"NOR,target);
                target->set_temp("over/right",1); }
                                else { 
                                message_vision(HIR"乱箭飞射，射中了$N双手，顿时伤害力全无!\n"NOR,target);
                target->set_temp("hand-all",1); 
                target->set_temp("over/left",1); }
                } else {
                                if( !target->query_temp("over/r-eyes") ) {
                message_vision(HIR"乱箭飞射，射中了$N右眼，顿时失去一半命中率!\n"NOR,target);
                target->set_temp("over/r-eyes",1);
                } else {
                                message_vision(HIR"乱箭飞射，射中了$N双眼，顿时命中率全无!\n"NOR,target);
                target->set_temp("eyes-all",1); 
                target->set_temp("over/l-eyes",1); }
                                }
                                target->add("kee",-(fun*10+200));
                COMBAT_D->report_status(target);
                }
                else {
                message_vision(HIW"$N看出了乱箭的破绽，急运身法，躲开了!\n"NOR,target);
                } 
        message_vision(HIG"$N使出乱箭齐发，暂缓攻势，补充弓上的箭!\n"NOR,me);
        me->start_busy(1);
        if( fun < 100 )
        function_improved ("m-archery",100);
        return 1;
}
