// By Swy 最后修正 QC 98/6/20
#include <ansi.h>
int perform(object me,object target)
{
	int i;
	string myhole;
	myhole = me->query("name") + "hole";
	if( !target )
	{
	if( me->query("kee") < 20 )
		return notify_fail("你气力不够，如何制做陷阱。\n");
	if( me->query_skill("plan",1) < 90 )
		return notify_fail("你的谋略能力不够。\n");
        if(me->is_fighting(target))
                return notify_fail("陷阱只能在战斗前使用。\n");
	if( environment(me)->query_temp(myhole) )
		return notify_fail("你的陷阱已经做好，不需要再做了。\n");
    me->add("kee",-15);
// 儒门...
        if( me->query("family/family_name") != "儒门")
    return notify_fail("不是儒生，不给你用咧！！^_^\n");
		message_vision(HIG + @LONG
在一阵忙碌之后，$N成功的做好了陷阱。
LONG + NOR , me );
		environment(me)->set_temp(myhole,1);
}
	else
	{
	if( me->query("sen") < 30 )
		return notify_fail("你的精神力不够，无法用计。\n");	
	if( me->query_skill("plan",1) < 90 )
		return notify_fail("你的谋略能力不够。\n");
	if( !environment(me)->query_temp(myhole))
	return notify_fail("你并没有在此做陷阱，无法使用此计。\n");
   if(target->query("no_hole")==1 || wizardp(target))
   return notify_fail("陷阱对他无效！\n");
  if(target->is_busy())
  return notify_fail("敌人busy中，快攻击吧！\n");
	me->add("sen",-30);
 if(80>random(100))
	{
	message_vision(RED + @STRING
$n一声惊呼，陷入$N的陷阱之中，无法动弹！！
STRING + NOR,me,target );
		if(target->query_temp("follow")==1)
		{
 target->start_busy(4);
 environment(me)->delete_temp(myhole);
 target->kill_ob(me);
 target->delete_temp("follow");
		}
		else
		{ 
target->start_busy(3);
		environment(me)->delete_temp(myhole);
		}
	}
        else
        message_vision(CYN + @STRING
$n眼明脚快，躲开了$N所布下的陷阱。
STRING + NOR,me,target );        
}
   me->start_busy(1);
        return 1;
}




