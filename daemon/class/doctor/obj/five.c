// heal.c
#include <ansi.h>
inherit F_CLEAN_UP;
inherit F_GUILDCMDS;
void remove_effect(object me, int amount);
int exert(object me,object target)
{
        int skill;
        if(me->query_skill("godcure")<60)
        return notify_fail("你的医术太差，不能医治五毒。\n");
        if(!target->query_condition("five_poison"))
        return notify_fail("没中毒的人不需要解毒。\n");
        if( me->is_fighting() )
        return notify_fail("战斗中不能解毒。\n");
        if((int)me->query("gin")<30||(int)me->query("sen")<30)
        return notify_fail("你的精或神不够，不能解毒。\n");
        if(me!=target)
        message_vision(
        HIW+"$N给$n服下几帖药，把$n的五毒治好了。\n" NOR,me,target);
        else message_vision( HIW "$N给自己服下几颗药丸，把自己的五毒治好了。\n"NOR,me);
        target->apply_condition("five_poison",0);
        me->add("gin",-30);
        me->add("sen",-30);
        return 1;
}


