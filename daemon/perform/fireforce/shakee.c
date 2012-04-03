#include <ansi.h>

int exert(object me, object target)
{
        if( target!=me ) {
                tell_object(me, "你只能帮自己回复。\n");
                return 1;
        }
        if( me->is_fighting() ) {
                tell_object(me, "战斗中运功？找死吗？\n");
                return 1;
        }
     if(me->query_condition("shakeeload") != 1)
     {
                tell_object(me, "你现在并无万剑诀的压力。\n");
                return 1;
        }

        write( HIC "你抖抖身体，将身上仙剑元气发挥至极限，顿时将万剑诀反噬的威力完全消除。\n" NOR);
        message("vision",me->name()+"运起体内元气，脸色顿时轻松无比\n",environment(me), me);

     me->apply_condition("shakeeload",0);
     me->delete_temp("shakeeload",1);
        return 1;
}
