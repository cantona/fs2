#include <ansi.h>
inherit F_FUNCTION;
inherit F_CLEAN_UP;

void remove_effect(object me, int amount);

int perform(object me, object target)
{
        int skill,force,fiendforce,temp;
        force=me->query("max_force");
        fiendforce=me->query_skill("fiendforce",1);
        if( (string)me->query_skill_mapped("force")!= "fiendforce")
            return notify_fail("修罗斗气要用修罗心法来启动。\n");
        if (me->query("force") < force/6)
            return notify_fail("你的内力不够，不能运起修罗斗气。\n");
        if(me->query_temp("fight")==1)
            return notify_fail("你已经运起修罗斗气的护身气劲了。\n");
        temp=me->query("functions/fight/level","fight");
        skill = temp;
        me->add("force",-force/10);
        me->set_temp("fight",1);
if (skill < 10){
        message_vision(
        HIW "$N运起‘"HIM"修罗斗气"HIW"’第一重「[1;5;31m气临山河动[0m"HIW"”，全身四周笼罩在一股白色的修罗斗气之内。。\n" NOR,me);
        me->add_temp("apply/dodge",skill);
        me->add_temp("apply/parry",skill);
        me->add_temp("apply/attack",skill);
         me->add_temp("apply/defense",50);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill);
        if( me->is_fighting() ) me->start_busy(2);
        if(skill < fiendforce )
        function_improved("fight",random(skill*18)+80);
        return 1;
                       }
if (skill >= 10 && skill < 20){
        message_vision(
        HIW "$N运起‘"HIM"修罗斗气"HIW"’第二重「[1;5;36m雷鼓震山川[0m"HIW"”，全身四周笼罩在一股绿色的修罗斗气之内。\n" NOR,me);
        me->add_temp("apply/dodge",skill);
        me->add_temp("apply/parry",skill);
        me->add_temp("apply/attack",skill);
        me->add_temp("apply/defense",50);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill);
        if( me->is_fighting() ) me->start_busy(2);
        if(skill < fiendforce )
        function_improved("fight",random(skill*17)+80);
        return 1;
                       }
if (skill >= 20 && skill < 30){
        message_vision(
        HIW "$N运起‘"HIM"修罗斗气"HIW"’第三重「[1;5;32m水精势绝伦[0m"HIW"”，全身四周笼罩在一股青色的修罗斗气之内。\n" NOR,me);
        me->add_temp("apply/dodge",skill);
        me->add_temp("apply/parry",skill);
        me->add_temp("apply/attack",skill);
        me->add_temp("apply/defense",50);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill);
        if( me->is_fighting() ) me->start_busy(2);
        if(skill < fiendforce )
        function_improved("fight",random(skill*16)+80);
        return 1;
                       }
if (skill >=30 && skill < 40){
        message_vision(
        HIW "$N运起‘"HIM"修罗斗气"HIW"’第四重「[1;5;34m风沙暗夜吼[0m"HIW"”，全身四周笼罩在一股紫色的修罗斗气之内。\n" NOR,me);
        me->add_temp("apply/dodge",skill);
        me->add_temp("apply/parry",skill);
        me->add_temp("apply/attack",skill);
        me->add_temp("apply/defense",50);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill);
        if( me->is_fighting() ) me->start_busy(2);
        if(skill < fiendforce )
        function_improved("fight",random(skill*15)+80);
        return 1;
                       }
if (skill >=40 && skill < 50){
        message_vision(
        HIW "$N运起‘"HIM"修罗斗气"HIW"’第五重「[1;5;33m火光燎天戈[0m"HIW"”，全身四周笼罩在一股红色的修罗斗气之内。\n" NOR,me);
        me->add_temp("apply/dodge",skill);
        me->add_temp("apply/attack",skill);
        me->add_temp("apply/defense",50);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill);
        if( me->is_fighting() ) me->start_busy(2);
        if(skill < fiendforce )
        function_improved("fight",random(skill*14)+80);
        return 1;
                       }
if (skill >=50 && skill < 60){
        message_vision(
        HIW "$N运起‘"HIM"修罗斗气"HIW"’第六重「[1;5;35m雨凝破山石[0m"HIW"”，全身四周笼罩在一股黄色的修罗斗气之内。\n" NOR,me);
        me->add_temp("apply/dodge",skill);
        me->add_temp("apply/parry",skill);
        me->add_temp("apply/attack",skill);
        me->add_temp("apply/defense",50);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill);
        if( me->is_fighting() ) me->start_busy(2);
        if(skill < fiendforce )
        function_improved("fight",random(skill*13)+80);
        return 1;
                       }
if (skill >=60 && skill <70){
        message_vision(
        HIW "$N运起‘"HIM"修罗斗气"HIW"’第七重「[1;5;31m电花照天河[0m"HIW"”，全身四周笼罩在一股银色的修罗斗气之内。\n" NOR,me);
        me->add_temp("apply/dodge",skill);
        me->add_temp("apply/parry",skill);
        me->add_temp("apply/attack",skill);
         me->add_temp("apply/defense",50);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill);
        if( me->is_fighting() ) me->start_busy(2);
        if(skill < fiendforce )
        function_improved("fight",random(skill*12)+80);
        return 1;
                       }
if (skill >=70 ){
        message_vision(
        HIW "$N运起‘"HIM"修罗斗气"HIW"’"HIB"最终奥义"HIW"「[1;5;33m冰寒囓人心[0m"HIW"”，全身四周笼罩在一股金色的修罗斗气之内。。\n" NOR,me);
        me->add_temp("apply/dodge",skill);
        me->add_temp("apply/parry",skill);
        me->add_temp("apply/attack",skill);
        me->add_temp("apply/defense",50);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill);
        if( me->is_fighting() ) me->start_busy(2);
        if(skill < fiendforce )
        function_improved("fight",random(skill*11)+80);
        return 1;
                       }
}

void remove_effect(object me, int skill)
{

        me->delete_temp("fight");
        me->add_temp("apply/dodge",-skill);
        me->add_temp("apply/parry",-skill);
        me->add_temp("apply/attack",-skill);
        me->add_temp("apply/defense",-50);
        message_vision("$N"HIW"‘修罗斗气’"NOR"所形成的护身气劲开始崩溃涣散了。\n"NOR,me);
}



