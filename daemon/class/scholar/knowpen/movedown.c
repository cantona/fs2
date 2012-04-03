//参照了swy的魔刀魔龙诀方式更改了部份code
//若swy更动到这时，再以你的准则来修正吧  by Neverend
#include <ansi.h>
#include <combat.h>
inherit F_FUNCTION;
inherit SSERVER;
int fun;
int k;
int perform(object me,object target)
{
	object weapon;
	object *all = me->query_enemy();
	int i,j, fun=me->query("functions/movedown/level");
	if( fun < 20) k=1;
	if( fun>=20 && fun < 70) k=random(2)+1;
	if( fun >= 70) k=random(3)+1;
	if( !target ) target = offensive_target(me);
	if(!me->is_fighting(target))
	return notify_fail("七星封穴只能在战斗中使用。\n");
	if(!(weapon=me->query_temp("weapon")) || (string)weapon->query("skill_type")!= "stabber" )
	return notify_fail("要有适合的武器才能用七星封穴。\n");
	if(me->query("force") < 100)
	return notify_fail("你的内力不够。\n");
	if( me->query("family/family_name") != "儒门")
	return notify_fail("不是儒生，不给你用咧！！^_^\n");
	if(target->is_busy())
	return notify_fail("敌人现在不能动,快攻击吧!!!!\n");
	me->add("kee",-50);
	me->add("force",-100);
	message_vision(HIG "$N使出行云流水笔法中的「七星封穴”往$n身上的穴道连点！\n" NOR,me,target);
	for( i = 0; i < sizeof(all); i++ ) 
	{
	if(environment(me)!=environment(all[i])) continue;  
	  if(random(100) < 80) 
	  {
	  message_vision(GRN"结果$n被$N点中，穴道被封！\n" NOR,me,target);
	  all[i]->start_busy(k);
	  }else{
	  message_vision(GRN"结果被$n识破，没有命中。\n" NOR,me,target);
	  }
	}
	if(fun<100 && me)
	function_improved("movedown",random(500));
	me->start_busy(1);
	return 1;
}

