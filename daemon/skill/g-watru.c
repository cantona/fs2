// by airke
#include <ansi.h>
inherit SKILL;
inherit SSERVER;

string reattack();

string *dodge_msg=({
 (: reattack :),
    });

string reattack()
{
	object me , target;
	int react;
	string msg;
	me=this_player();
        react = (me->query_skill("g-steps",1) / 4) +5;
	target = offensive_target(me);
	target->receive_damage("kee",react);
	msg = me->query("name") + "使出一招" + HIR "逆转乾坤" NOR + "将" +
	target->query("name") + "反击回去。\n";
	return msg;
}	

int valid_learn(object me)
{
	return 1;
}

string query_dodge_msg(string limb)
{
  return dodge_msg[random(sizeof(dodge_msg))];
}

int valid_enable(string usage) 
{
  return usage == "dodge" || usage == "move";
}


int practice_skill(object me)
{
	if( (int)me->query("gin") < 30 )
		return notify_fail("你的精不够，不能练追星步法。\n");
	me->receive_damage("gin", 30);
	return 1;
}

string perform_action_file(string action)
{
        return CLASS_D("taoist")+ "/g-steps/" +action;
}
