

#include <ansi.h>

int exert(object me, object target)
{
  if(!target->query("quest/new_gold_fire",1)){
                tell_object(me, "这是极火功新功能，必须重解谜才能用\n");
                return 1;
                                                   }
	if( target!=me ) {
		tell_object(me, "你只能帮自己疗伤。\n");
		return 1;
	}
	if( me->is_fighting() ) {
		tell_object(me, "战斗中运功疗伤？找死吗？\n");
		return 1;
	}
	if( (int)me->query("force") < 50 ) {
		tell_object(me, "你的内力不够，无法使用极火功来疗伤。\n");
		return 1;
	}

	write( HIR "你席地运起‘极火功’中的疗伤心法，一股火焰在身上不停燃烧，内伤已渐渐化解。\n" NOR);
	message("vision",me->name()+"运起‘极火功’中的疗伤心法，一股火焰在身上不停燃烧，不久，吐出一口瘀血，看起来好多了。\n",environment(me), me);

	me->receive_curing("kee", ( 10 + (int)me->query_skill("force")/20 + (int)me->query_skill("fireforce")/10 ));
	me->add("force", -35 );
	if( me->query("force") < 0 )
		me->set("force", 0);

	return 1;
}
