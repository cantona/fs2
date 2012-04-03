// skyfire by xman

#include <ansi.h>

int update_condition(object me, int duration)
{
        if(duration==0) return 0;
        me->receive_damage("kee",250);
        me->receive_damage("gin",250);
        me->apply_condition("skyfire",duration-1);
        tell_object(me,HIR"你受到"HIW"九天玄火"HIR"和"HIY"九地烈焰"HIR"的交相煎熬, 发出痛苦的呻吟!\n"NOR);
        message("vision",HIR+me->name()+"受到"HIW"九天玄火"HIR"和"HIY"九地烈焰"HIR"的交相煎熬, 发出痛苦的呻吟!\n"NOR,environment(me),me);
        COMBAT_D->report_status(me);
        if( duration < 1 ) return 0;
        return 1;
}
