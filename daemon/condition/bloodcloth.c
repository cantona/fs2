// by swy 用于 mk-blade
#include <ansi.h>
int update_condition(object me, int duration)
{
if(duration==0) return 0;
tell_object(me , HIW"你的‘"HIR"血气斗铠"HIW"’，迅速漫延保护全身。\n" NOR);
message("vision",HIC+me->name()+"全身发红‘"HIR"血气斗铠"HIC"’散布全身，方圆十里都陇罩在血光之下。\n"NOR,environment(me),me);
me->apply_condition("bloodcloth",duration-1);
if (duration < 1) return 0;
return 1;
}
