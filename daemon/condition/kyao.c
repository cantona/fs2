#include <ansi.h>
int update_condition(object me, int duration)
{
if( duration >= 1 )
  {
     tell_object(me,HIG"\n你身上散发出阵阵魔气. \n"NOR);
     message("vision",me->name() + HIG"身上发出异于当今武林各大门派的魔气！\n"NOR,
      environment(me), me);
   }
  if( duration < 1 )
  return 0;
  return 1;
}
