#include <ansi.h>
int update_condition(object me, int duration)
{
int fun=me->query("suck");
  if(duration==0) {
me->delete("suck");
me->delete("five");
return 0; 
}
 me->receive_wound("kee",50+(fun*15));
 me->receive_wound("sen",50+(fun*10));
 me->start_busy(1);
        me->apply_condition("dark_poison",duration-1);
        tell_object(me,HIC "你中了深宫奇毒，现在毒性开始发作！\n" NOR);
        message("vision",HIC+me->name()+"眉心逐渐变黑，似乎毒性已经发作了！\n" NOR,environment(me),me);
	if( duration < 1 ) return 0;
	return 1;
}
