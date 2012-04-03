#include <ansi.h>
int update_condition(object me, int duration)
{
if(duration==0) return 0;
tell_object(me,HIR
"你的刀伤复发，伤口被气劲侵蚀入骨，严重出血！\n"NOR);
message("vision",HIR+me->name()+"刀伤发作红肿，顿时全身无力，坐倒在地！\n"NOR,environment(me),me);
if(me->is_fighting()) me->start_busy(1);
me->receive_wound("kee",250);
me->apply_condition("blade",duration-1);
if(duration<1) return 0;
return 1;
}
