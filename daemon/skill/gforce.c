// gforce.c
//by airke

#include <ansi.h>
inherit SKILL;
inherit SSERVER;

int valid_enable(string usage) { return usage=="force"; }


int valid_learn(object me)
{
	return 1;
}

int practice_skill(object me)
{
	return notify_fail("紫星河只能用学(learn)的，或是从运功(exert)中增加熟练度。\n");
}

string perform_action_file(string action)
{
return CLASS_D("taoist")+"/gforce/"+action;
}

string exert_function_file(string func)
{
	return CLASS_D("taoist") +"/gforce/" + func;
}

void skill_improved(object me)
{
//	int s;

//	s = me->query_skill("gforce", 1);
//	if( s%10==9 && (int)me->query("con") < s/4) {
//		tell_object(me, HIW "由于你的内功修炼有成，你的根骨改善了。\n" NOR);
//		me->add("con",3);
//		tell_object(me , HIY "经过一番努力，你的内力增强了" NOR );
//		me->add("max_force",25);
//	} 
//}


}
