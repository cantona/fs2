//修正一点小bug，幻指常常抓不到敌人还是照常发
//希望修正后可以避免这情形 by Neverend
#include <ansi.h>
#include <combat.h>
inherit F_FUNCTION;
inherit SSERVER;
int fun;
int perform(object me,object target)
{
	object weapon;
	int k1,k2,k3;
	if( !target ) target = offensive_target(me);
	if( !target)	return notify_fail("没有敌人，你封谁呀!!\n");
	fun=me->query("functions/finger/level");
	if( me->query("family/family_name") != "儒门")
	return notify_fail("儒门幻指岂是汝辈所能控制的了的...\n");
	if(!me->is_fighting(target))
	return notify_fail("儒门幻指只能在战斗中使用。\n");
	if(!(weapon=me->query_temp("weapon")) || (string)weapon->query("skill_type")!="stabber" )
	return notify_fail("要有适合的武器才能用儒门幻指。\n");
	if(me->query("force") < 100)	return notify_fail("你的内力不够。\n");
	me->add("kee",-50);
	me->add("force",-100);
        message_vision(
""HIW"$N突然从招式中的变化领悟到了行云流水笔法的最终奥义
"HIR" ==================================================
 ==============   "HIM"儒   门   幻   指 "HIR" ==============
 ==================================================\n"
NOR,me,target);
	if( 80 > random(100))
	{
	message_vision(
""HIC"$n无法摸清儒门幻指的破绽，被幻指所困惑，令$n的精神涣散！\n"
NOR,me,target);
	k1=target->query("max_gin")/5;
	k2=target->query("max_kee")/5;
	k3=target->query("max_sen")/5;
	if(k1>300) k1=300;
	if(k2>500) k2=500;
	if(k3>300) k3=300;
	target->receive_damage("gin",(fun*4+k1));
	target->receive_damage("kee",(fun*8+k2));
	target->receive_damage("sen",(fun*4+k3));
	}else{
	message_vision(
""HIC"$n看透了幻指中精妙的变化，刚好从$n身边擦过。\n"NOR,me,target);
	}
	if(fun<100)
	function_improved("finger",random(500));
    me->start_busy(1);
	return 1;
}

