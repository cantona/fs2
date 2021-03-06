#include <ansi.h>
inherit F_FUNCTION;
inherit F_CLEAN_UP;
int skill;
void remove_effect(object me, int amount);

int exert(object me, object target)
{
skill=this_player()->query("functions/bluesea/level");
        if(userp(me))
        return notify_fail("请改用 mixforce。\n");
        if( (string)me->query_skill_mapped("force")!= "superforce")
         return notify_fail("靛沧海必须使用浑天心法才能发挥威力。\n");
        if( target != me ) return notify_fail("你只能用浑天心法提升内力威力。\n");
        if (me->query_skill("superforce",1) < 110)
            return notify_fail("你的浑天心法等级不足，须要 110 级。\n");
        if (me->query("force") < 350+skill*5)
            return notify_fail("你的内力不够，无法使用靛沧海。\n");
        if( (int)me->query("max_force") < 1300 )
        return notify_fail("你的内力根基不足,无法完全发挥出靛沧海澎湃的内劲。\n");
        if(me->query_temp("bluesea")) return notify_fail("你已经在用了。\n");
        if(me->query_temp("purple")) return notify_fail("你已经在运行[32m紫星河心法[0m了。\n");
        if(me->query_temp("white")) return notify_fail("你已经在运行[37m白云烟心法[0m了。\n");
        if(me->query_temp("nine")) return notify_fail("你已经在运行[35m玖荡霞心法[0m了。\n");
        if(me->query_temp("gen")) return notify_fail("你已经在使用[35m土昆仑心法[0m了。\n");
        if(me->query_temp("ice")) return notify_fail("你已经在运转[37m碧雪冰心法[0m了。\n");
        if(me->query_temp("black")) return notify_fail("你已经在运行[30m玄混沌[0m了。\n");
        if(me->query_temp("goldsun")) return notify_fail("你已经在强运[33m金晨曦[0m内劲了。\n");
        if(me->query_temp("blood")) return notify_fail("你已经在催鼓[31m血穹苍[0m内劲了。\n");
        if(me->query_temp("green")) return notify_fail("你已经在运行[32m玄宇宙[0m内劲了。\n");

        me->set_temp("bluesea",1);
        message_vision(
        HIC "$N运起浑天心法第七层"HIB"[靛沧海]"HIC"，真气流窜，暮地周围出现"HIB"海啸般的内劲"HIB"!!\n" NOR,me);

        me->add_temp("apply/parry", 30);
        me->add_temp("apply/unarmed", -20);
        me->add_temp("apply/stick", -20);
        me->add_temp("apply/force", 20);
        me->add_temp("apply/move", 20);
        me->add_temp("apply/dodge", 20);
        call_out("remove_effect", skill, me);
        if( me->is_fighting() ) me->start_busy(1);
        return 1;
}

void remove_effect(object me, int amount)
{
        if(!me) return ;
        me->set_temp("bluesea",0);
        me->add_temp("apply/parry", -30);
        me->add_temp("apply/unarmed", 20);
        me->add_temp("apply/stick", 20);
        me->add_temp("apply/force", -20);
        me->add_temp("apply/move", -20);
        me->add_temp("apply/dodge", -20);
        tell_object(me,"你所散发出来的[35m靛沧海[0m气劲倏地消失无踪。\n");
        if(skill<100)
        function_improved("bluesea",random(800));
}
