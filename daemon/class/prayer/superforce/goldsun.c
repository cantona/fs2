#include <ansi.h>
inherit F_FUNCTION;
inherit F_CLEAN_UP;
int skill;
void remove_effect(object me, int amount);

int exert(object me, object target)
{
if(!me) return notify_fail("发生问题了!!!\n");
        if(userp(me))
        return notify_fail("请改用 mixforce。\n");
skill=me->query("functions/goldsun/level");
if(me->query("class")!="prayer")
          return notify_fail("你的职业无法使用此技能。\n");
        if( (string)me->query_skill_mapped("force")!= "superforce")
         return notify_fail("金晨曦必须使用浑天心法才能发挥威力。\n");

        if( target != me ) return notify_fail("你只能用浑天心法提升内力威力。\n");
        if (me->query_skill("superforce",1) < 150)
            return notify_fail("你的浑天心法等级不足，须要 150 级。\n");
        if (me->query("force") < 450+skill*5)
            return notify_fail("你的内力不够，无法使用金晨曦。\n");
        if( (int)me->query("max_force") < 1600 )
        return notify_fail("你的内力根基不足,无法抑制金晨曦的气劲。\n");
        if(me->query_temp("goldsun")) return notify_fail("你已经在用了。\n");
        if(me->query_temp("purple")) return notify_fail("你已经在运行[32m紫星河心法[0m了。\n");
        if(me->query_temp("white")) return notify_fail("你已经在运行[37m白云烟心法[0m了。\n");
        if(me->query_temp("nine")) return notify_fail("你已经在运行[35m玖荡霞心法[0m了。\n");
        if(me->query_temp("gen")) return notify_fail("你已经在使用[35m土昆仑心法[0m了。\n");
        if(me->query_temp("ice")) return notify_fail("你已经在运转[37m碧雪冰心法[0m了。\n");
        if(me->query_temp("black")) return notify_fail("你已经在运行[30m玄混沌[0m了。\n");
        if(me->query_temp("bluesea")) return notify_fail("你已经在催运[34m靛沧海[0m内劲了。\n");
        if(me->query_temp("blood")) return notify_fail("你已经在催鼓[31m血穹苍[0m内劲了。\n");
        if(me->query_temp("green")) return notify_fail("你已经在运行[32m玄宇宙[0m内劲了。\n");

        me->set_temp("goldsun",1);
        message_vision(
        HIC "$N运起浑天心法第八层"HIY"[金晨曦]"HIC"，真气鼓涨，刹时全身爆出"HIY"万道金色的光芒"NOR"!!\n" NOR,me);

        me->add_temp("apply/force", 50);
        me->add_temp("apply/parry", -10);
        me->add_temp("apply/unarmed", 50);
        me->add_temp("apply/stick", 50);
        me->add_temp("apply/move", -30);
        me->add_temp("apply/dodge", -30);
        call_out("remove_effect", skill, me);
        if( me->is_fighting() ) me->start_busy(1);
        return 1;
}

void remove_effect(object me, int amount)
{
        if(!me) return ;
        me->set_temp("goldsun",0);
        me->add_temp("apply/force", -50);
        me->add_temp("apply/parry", 10);
        me->add_temp("apply/unarmed", -50);
        me->add_temp("apply/stick", -50);
        me->add_temp("apply/move", 30);
        me->add_temp("apply/dodge", 30);
        tell_object(me,"只见你身上[33m金晨曦[0m所发出的万丈金光忽地消失。\n");
        if(skill < 150)
        function_improved("goldsun",random(900));
}
