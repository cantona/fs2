#include <ansi.h>

int update_condition(object me, int duration)
{
     if(duration==0) return 0;
        me->set("force_factor",0);
        me->apply_condition("enforce_poison", duration - 1);
        tell_object(me, HIG "你中的" HIB "十香软筋散" HIG "发作了！\n" NOR );
        message("vision",HIB+me->name()+"全身虚虚浮浮，看来使不上力。\n"NOR,environment(me),me);
        if( duration < 1 ) return 0;
        return 1;
}

