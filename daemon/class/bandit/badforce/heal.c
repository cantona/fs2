// heal.c by ice
// modify by oda (96/4/19)

#include <ansi.h>

int exert(object me, object target)
{
	int bellpower=me->query("bellicosity")/100 + 1;

	if( target!=me ) {
		tell_object(me, "你只能帮自己疗伤。\n");
		return 1;
	}
	if( me->is_fighting() ) {
		tell_object(me, "战斗中运功疗伤？找死吗？\n");
		return 1;
	}
	if( me->query_condition("mogi") ) {
		tell_object(me, HIG"你身上的入灭之毒忽然发作,使内息受到影响无法运气疗伤\n"NOR);
		return 1;
	}
	if( (int)me->query("force") < 50 ) {
		tell_object(me, "你的内力不够，无法使用天魔金身的心法来疗伤。\n");
		return 1;
	}

/*
	if( (int)me->query("eff_kee") < (int)me->query("max_kee") / 2 )
		return notify_fail("你已经受伤过重，只怕一运真气便有生命危险！\n");
*/
        if(me->query("class") != "bandit")
        return notify_fail("只有恶人能用天魔金身疗伤。\n");
	write( HIW "你席地运起" + HIY "‘天魔金身’" + HIW "中的疗伤心法，一股邪恶的杀气充满全身，令你觉得舒服多了。\n" NOR);
	message("vision",
		me->name() + "运起天魔金身开始疗伤，泛着金光的身上不停的冒出汗珠，不久，吐出一口瘀血，看起来好多了。\n",
		environment(me), me);

me->receive_curing("kee", ( 10 + (int)me->query_skill("force",1)/10 + (int)me->query_skill("badforce",1)/10 ) * bellpower );
	me->add("force", -( 45 + bellpower * 3 ) );
	if( me->query("force")<0 )
		me->set("force", 0);

	return 1;
}
