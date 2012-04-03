#include <ansi.h>
inherit F_FUNCTION;
inherit SSERVER;
int perform(object me, object target)
{
	int skill, level, bellpower, force, damage, i;
        object *enemy, wea1;
        skill=me->query("functions/evil-blade/level");
        if(skill<=35) level=1;
        if(skill>=36&&skill<=70) level=2;
        if(skill>=71) level=3;
	bellpower = me->query("bellicosity")/20;
    if(bellpower > 300) //by chan fix 
      bellpower=300;
	force = me->query("force");
	enemy = me->query_enemy();
	i = sizeof(enemy);
        wea1 = me->query_temp("weapon");
if(me->query("family/family_name")!="恶人谷")
return notify_fail("你不是恶人谷的，所以不能用。\n");
if( me->query_skill_mapped("force")!="badforce" || 
me->query_skill_mapped("unarmed")!="badstrike" || 
(wea1 && wea1->query("skill_type")!="unarmed") )
		return notify_fail("只有在空手使用恶霸掌及恶化魔功时才能发出天魔刀。\n");
	if( me->query_skill("badstrike",1)<20 )
		return notify_fail("你的恶霸掌技巧不足。\n");
	if( me->query_skill("badforce",1)<20 )
		return notify_fail("你的内功不够深厚，无法聚气成刀。\n");
	if( force<90 ) return notify_fail("你的内力不足以聚起天魔刀芒。\n");
    if( !me->is_fighting(target) )
		return notify_fail("天魔刀只能在战斗中使用。\n");

	if( !target ) target = offensive_target(me);
	if( level==3 && me->query_skill("ghost-steps",1)<50 ) level=2;
	switch( random(level) ) {
		case 0:
		message_vision(HIW"\t$N将内劲聚于双掌，祭起十成功力之‘"+HIR"天魔刀"+HIW"’！\n\n\t只见$N掌中逐渐形成两个耀眼刀环，倏地向$n疾射而去！\n\n"NOR,me,target);
		me->add("force", -50);
        if ( 80<random(100) ) {
			message_vision(HIM"只见$N刀势虽猛，但似乎欠缺准头，连$n的衣服都没沾到。\n"NOR,me,target);
        me->start_busy(1);
			return 1;
		}
		damage = skill*3+bellpower;
		target->receive_wound("kee", damage);
		message_vision(HIC"$n闪避不及，被$N的天魔刀芒贯体而过，当场血流如注！\n"NOR,me,target);
		COMBAT_D->report_status(target);
		me->start_busy(1);
		break;
		case 1:
		message_vision(HIW"\t$N双掌合十，高举过顶，顺势运起‘"+HIR"大天魔刀"+HIW"’\n\n\t只见$N双掌的天魔刀劲合而为一，形成一个巨大刀环。\n\n\t突然间$N真气一提，举起大天魔刀向$n直劈而下！\n\n"NOR,me,target);
		me->add("force", -65);
        if( 80<random(100) ) {
			message_vision(HIM"只见$N刀势虽猛，但似乎欠缺准头，连$n的衣服都没沾到。\n"NOR,me,target);
       me->start_busy(1);
			return 1;
		}
		damage = skill*5+bellpower;
		target->receive_wound("kee", damage);
		message_vision(HIC"$n闪避不及，被$N的巨大刀环当场击中，口中鲜血狂喷而出！\n"NOR,me,target);
		COMBAT_D->report_status(target);
		me->start_busy(1);
		break;
		case 2:
		message_vision(HIW"\t$N身形一变，施展出幽冥身法幻化为四个分身，将$n团团围住。\n\n\t只见$N四个身形同时聚起连串天魔刀，准备使出恶霸掌中最强一式\n\n\t\t\t‘"+HIR"天魔乱舞"+HIW"’\n\n\t霎时间$N八掌齐发，满天刀芒向四周狂射而出！\n\n\n"NOR,me,target);
		me->add("force", -90);
		damage = skill*7+bellpower;
		while(i--) {
            if (80>random(100)) {
				enemy[i]->receive_wound("kee", damage);
				message_vision(HIC"$N一个失守，只好照单全收，霎时间刀芒如雨点般落在$N身上！\n"NOR,enemy[i]);
				COMBAT_D->report_status(enemy[i]);
			} else {
				message_vision(HIM"只见$N狼狈的从漫天刀网中钻了出来，不过倒是没受什么伤。\n"NOR,enemy[i]);
				COMBAT_D->report_status(enemy[i]);
			}
		}
me->start_busy(1);
break;
	}
   if (me->query("functions/evil-blade/level") < 100) {
function_improved("evil-blade",random(700));
   }
	return 1;
}

