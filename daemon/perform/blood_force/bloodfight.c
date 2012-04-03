#include <ansi.h>
inherit F_FUNCTION;
inherit F_CLEAN_UP;

//void remove_effect(object me, int amount);

int perform(object me, object target)
{
        int skill,skill1,force,bloodforce,temp;
        force=me->query("max_force");
        bloodforce=me->query_skill("blood_force",1);
        if( (string)me->query_skill_mapped("force")!= "blood_force")
            return notify_fail("血魔斗气要用血魔心法来启动。\n");
        if (me->query("force") < force/6)
            return notify_fail("你的内力不够，不能运起血魔斗气。\n");
        if(me->query_temp("fight")==1)
            return notify_fail("你已经运起血魔斗气的护身气劲了。\n");
        temp=me->query("functions/bloodfight/level");
        skill = temp;
        me->add("force",-force/10);
        me->set_temp("bloodfight",1);
if (skill < 15){
        skill1=2*skill;
        message_vision(
        HIR "$N运起‘"HIM"血魔斗气"HIR"’第一层「"HIC"血气方刚 "HIR"”，全身四周笼罩在一股淡红色的血魔斗气之内。\n" NOR,me);
        me->add_temp("apply/dodge",skill);   
        me->add_temp("apply/parry",skill);
        me->add_temp("apply/attack",skill);
        me->add_temp("apply/defense",-skill1);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill);
        if( me->is_fighting() ) me->start_busy(2);
        if(skill < bloodforce )
        function_improved("bloodfight",random(skill*18)+80);
        return 1;
                       }
if (skill >= 15 && skill < 30){
        skill1=1.5*skill;
        message_vision(
        HIR "$N运起‘"HIM"血魔斗气"HIR"’第二层「"HIC"血气凌人 "HIR"”，全身四周笼罩在一股暗红色的血魔斗气之内。\n" NOR,me);
        me->add_temp("apply/dodge",skill);
        me->add_temp("apply/parry",skill);
        me->add_temp("apply/attack",skill);
        me->add_temp("apply/defense",-skill1);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill);
        if( me->is_fighting() ) me->start_busy(2);
        if(skill < bloodforce )
        function_improved("bloodfight",random(skill*17)+80);
        return 1;
                       }
if (skill >=30 && skill < 50){
        skill1=1.2*skill;
        message_vision(
        HIW "$N运起‘"HIM"血魔斗气"HIW"’第三层「"HIC"血气凌空耀四方"HIW"”，全身四周笼罩在一股红色的血魔斗气之内。\n" NOR,me);
        me->add_temp("apply/dodge",skill);
        me->add_temp("apply/parry",skill);
        me->add_temp("apply/attack",skill);
        me->add_temp("apply/defense",-skill1);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill);
        if( me->is_fighting() ) me->start_busy(2);
        if(skill < bloodforce )
        function_improved("bloodfight",random(skill*15)+80);
        return 1;
                       }
if (skill >=50 && skill < 70){
        skill1=skill;
        message_vision(
        HIW "$N运起‘"HIM"血魔斗气"HIW"’第四层「"HIY"血霸四方"HIW"”，全身四周笼罩在一股红色的血魔斗气之内。\n" NOR,me);
        me->add_temp("apply/dodge",skill);
        me->add_temp("apply/attack",skill);
        me->add_temp("apply/defense",-skill1);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill);
        if( me->is_fighting() ) me->start_busy(2);
        if(skill < bloodforce )
        function_improved("bloodfight",random(skill*14)+80);
        return 1;
                       }
if (skill >=70 && skill < 90){
        skill1=0.8*skill;
        message_vision(
        HIW "$N运起‘"HIM"血魔斗气"HIW"’第五层「"HIR"血染九重天 "HIW"”，全身四周笼罩在一股亮红色的血魔斗气之内。\n" NOR,me);
        me->add_temp("apply/dodge",skill);
        me->add_temp("apply/parry",skill);
        me->add_temp("apply/attack",skill);
        me->add_temp("apply/defense",-skill1);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill);
        if( me->is_fighting() ) me->start_busy(2);
        if(skill < bloodforce )
        function_improved("bloodfight",random(skill*13)+80);
        return 1;
                       }
if (skill >=90){
        skill1=0.5*skill;
        message_vision(
        HIC "$N大喝："HIR"魔威荡荡圣佛惧，血雾蒙蒙神魔震！！\n"HIC"随即运起‘"HIR"血魔斗气"HIC"’之终极威力"HIW"「"HBRED"魔血滞空染红尘"NOR""HIW"”"HIC"，全身散发出无比红光，四周瞬间笼罩在一股肃杀之气之中。\n" NOR,me);
        me->add_temp("apply/dodge",skill);
        me->add_temp("apply/parry",skill);
        me->add_temp("apply/attack",skill);
         me->add_temp("apply/defense",-skill1);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill);
        if( me->is_fighting() ) me->start_busy(2);
        if(skill < bloodforce )
        function_improved("bloodfight",random(skill*12)+80);
        return 1;
    }
   }
void remove_effect(object me,int skill,int skill1)
{
me->delete_temp("bloodfight");
me->add_temp("apply/dodge",-skill);
me->add_temp("apply/parry",-skill);
me->add_temp("apply/attack",-skill);
me->add_temp("apply/defense",skill1);
message_vision(HIW"$N‘血魔斗气’"NOR"所形成的护身气劲开始崩溃涣散了。\n"NOR,me);
}


