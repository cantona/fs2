#include <ansi.h>
// 加强毒教的 五毒 by swy
int update_condition(object me, int duration)
{
int fun=me->query("five");
if(duration==0) {
me->delete("five");
me->delete("suck");
return 0;   
}
me->receive_wound("kee",100+(fun*20));
me->add("force",-(100+(fun*20)));
me->start_busy(1);
        me->apply_condition("five_poison",duration-1);
        message_vision(
   HIY "$N中了五毒神掌，毒性开始发作！\n" NOR,me);
message_vision(HIW"$N中了五毒神掌，内力开始流失。\n" NOR,me);  
	if( duration < 1 ) return 0;
	return 1;
}
